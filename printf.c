#include <stdio.h>
#include "holberton.h"
#include <unistd.h>
/**
 * print_number - prints integer
 * @n: integer
 */

int print_number(unsigned long int n)
{
	unsigned long int x = 1;
	unsigned long int i = n;
	int j = 0;

	while (n && i / x >= 10)
	{
		x = x * 10;
	}
	for (; x >= 10; x = x / 10)
	{
		_putchar(i / x + '0');
		j++;
		i = i - (i / x) * x;
	}
	_putchar(i % 10 + '0');
	j++;
	return (j);
}
/**
 * _printf - prints string from several types
 * @format: the string
 * @...: multiple arguments to translate into string
 */
int _printf(const char *format, ...)
{
	int iter = 0, i;
	int bytes = 0;
	unsigned int j;
	char *s;
	void *p;
	va_list arg;

	va_start(arg, format);
	while (format[iter] != '\0')
	{
		if (format[iter] != '%')
		{
			_putchar(format[iter]);
			bytes++;
		}
		if ((format[iter] == '%' && format[iter + 1] != '%') || (format[iter] == '%' && format[iter - 1] != '%'))
		{
			iter++;
			switch (format[iter])
			{
			case 'c':
				i = va_arg(arg, int);
				_putchar(i);
				bytes++;
				break;
			case 'i':
			case 'd':
				i = va_arg(arg, int);
				if (i < 0)
				{
					i = -i;
					_putchar('-');
					bytes++;
				}
				bytes = bytes + print_number(i);
				break;
			case 's':
				s = va_arg(arg, char *);
				for (j = 0; s[j]; j++)
				{
					_putchar(s[j]);
					bytes++;
				}
				break;
			case 'S':
				s = va_arg(arg, char *);
				bytes = bytes + convert_to_hex(s);
				break;
			case 'b':
				j = va_arg(arg, int);
				if (j != 0)
					bytes = bytes + convert_to_binary(j);
				else
				{
					bytes++;
					_putchar('0');
				}
				break;
			case 'r':
				s = va_arg(arg, char *);
				bytes = bytes + _print_rev_recursion(s);
				break;
			case 'R':
				s = va_arg(arg, char *);
				bytes = bytes + rot13(s);
				break;
			case '%':
				_putchar(format[iter]);
				bytes++;
				break;
			default:
				_putchar('%');
				_putchar(format[iter]);
				bytes++;
				break;
			}
		}
		iter++;
	}
	va_end(arg);
	return (bytes);
}
