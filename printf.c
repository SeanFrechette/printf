#include "holberton.h"
/**
 * _printf - print string
 * @format: string
 * @...: flags and variables
 * Return: Zero
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	va_list arg;
	specdef_t specifier[] = {
		{"c", catchar},
		{"s", catstring}
	};
	
	va_start(arg, format);

	return (0);
}
