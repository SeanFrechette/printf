#include <stdio.h>
#include "holberton.h"

/**
 * print_number - prints integer
 * @n: integer
 */

void print_number(unsigned long long int n)
{
	unsigned long long int x = 1;
	unsigned long long int i = n;

	while (n && i / x >= 10)
	{
		x = x * 10;
	}
	for (; x >= 10; x = x / 10)
	{
		_putchar(i / x + '0');
		i = i - (i / x) * x;
	}
	_putchar(i % 10 + '0');
}
/**
 * _printf - prints string from several types
 * @format: the string
 * @...: multiple arguments to translate into string
 */
int printf(const char *format, ...)
{
	int iter = 0, i;
	unsigned int j;
	char *s;
	va_list arg;

	va_start(arg, format);
	while (format[iter] != '\0')
	{
		if (format[iter] != '%')
		{
			_putchar(format[iter]);
		}
		if (format[iter] == '%')
		{
			iter++;
			switch (format[iter])
			{
			case 'c':
				i = va_arg(arg, int);
				_putchar(i);
				break;
			case 'i':
			case 'd':
				i = va_arg(arg, int);
				if (i < 0)
				{
					i = -i;
					_putchar('-');
				}
				print_number(i);
				break;
			case 's':
				s = va_arg(arg, char *);
				for (j = 0; s[j]; j++)
					_putchar(s[j]);
				break;
			case 'S':
				s = va_arg(arg, char *);
				convert_to_hex(s);
				break;
			case 'b':
				j = va_arg(arg, int);
				convert_to_binary(j);
				break;
			case 'r':
				s = va_arg(arg, char *);
				_print_rev_recursion(s);
				break;
			case 'R':
				s = va_arg(arg, char *);
				rot13(s);
				break;
			}
		}
		iter++;
	}
	va_end(arg);
	return (0);
}
