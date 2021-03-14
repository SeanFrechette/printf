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
void _printf(char *format, ...)
{
	int iter = 0;
	unsigned int i, j;
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
			}
		}
		iter++;
	}
	va_end(arg);
}
