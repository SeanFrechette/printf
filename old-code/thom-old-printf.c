#include "holberton.h"
#include <stdio.h>
/**
 * _printf - print string
 * @format: string
 * @...: flags and variables
 * Return: Zero
 */
int _printf(const char *format, ...)
{
	unsigned int i,j; /* iterators */
	va_list arg;
	specdef_t specifier[] = {
		{"c", _putchar},
		{"s", printstring},
		{NULL, NULL}
	};

	va_start(arg, format);
	for (i = 0; format && format[i]; i++)
		if (format[i] == '%' && format[i + 1] && format[i + 1] != '%')
			for (j = 0; specifier[j].spec; j++)
			{
				if (format[i + 1] == specifier[j].spec[0])
				{
					specifier[j].f(va_arg(arg, );
					i = i + 2;
				}
				_putchar(format[i]);
			}
	va_end(arg);
	return (0);
}
