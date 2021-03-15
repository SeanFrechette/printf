#include "variadic_functions.h"
/**
 * print_chr - print arg
 * @arg: input
 */
void print_chr(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - print int
 * @arg: input
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_flt - print float
 * @arg: input
 */
void print_flt(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - print string
 * @arg: input
 */
void print_str(va_list arg)
{
	char *output;

	output = va_arg(arg, char *);
	printf("%s", output == NULL ? "(nil)" : output);
}

/**
 * print_all - function that prints anything
 * @format: data types of agrs passed
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *separator = "";
	va_list arg;

	parse_t form[] = {
		{"c", print_chr},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (form[j].op)
		{
			if (format[i] == form[j].op[0])
			{
				printf("%s", separator);
				form[j].f(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
