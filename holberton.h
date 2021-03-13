#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include <stdarg.h>
typedef struct specdef
{
	char *spec;
	char ** (*f)();
} specdef_t;
int _putchar(char c);
int _printf(const char *format, ...);
void print_to_console(char *str);

char ** catchar(char input);
char ** catstring(char *input);
#endif
