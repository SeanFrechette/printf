#include "holberton.h"
/**
 * _printf - print string
 * @format: string
 * @...: flags and variables
 * Return: Zero
 */
int _printf(const char *format, ...)
{
	unsigned int i, j; /* iterators */
	va_list arg;
	specdef_t specifier[] = {
		{"c", catchar},
		{"s", catstring},
		{NULL, NULL}
	};
	
	va_start(arg, format);

	for (i = 0; format && format[i]; i++) /* loop through string */
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == specifier[j].spec[0])
			{
				for (j = 0; specifier[j].spec; j++) /* loop through specifiers */
				{
					specifier[j].f(arg);
				}
			}
		}
	}

	va_end(arg);
	return (0);
}
