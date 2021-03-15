#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct parse - determines which function to use
 * @op: type of argument passed
 * @f: the function associated
 */
typedef struct parse
{
	char *op;
	void (*f)();
} parse_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
