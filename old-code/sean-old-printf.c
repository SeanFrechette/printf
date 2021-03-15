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
	char **buffer;
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
			for (j = 0; specifier[j].spec; j++) /* loop through specifiers */
			{
				if (format[i + 1] == specifier[j].spec[0])
				{
					buffer = specifier[j].f(arg, i);
					i++;
				}
			}
		}
	}

	print_to_console(buffer);
	va_end(arg);
	return (0);
}
