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
int _printf(const char *format, ...)
{
	int iter = 0, i;
	unsigned int j;
	char hexArr[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};
	char *s;
	int a[10];
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
				for (j = 0; s[j]; j++)
					if (s[j] >= 32 && s[j] < 127)
					{
						_putchar(s[j]);
					}
					else
					{
						_putchar('\\');
						_putchar('x');
						_putchar(hexArr[s[j] / 16]);
						_putchar(hexArr[s[j] % 16]);
					}
				break;
			case 'b':
				j = va_arg(arg, int);

				for (i = 0; j > 0; i++)
				{
					a[i] = j % 2;
					j = j / 2;
				}
				for (i = i - 1; i >= 0; i--)
					print_number(a[i]);
			}
		}
		iter++;
	}
	va_end(arg);
	return (0);
}
