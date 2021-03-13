#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include <stdarg.h>
typedef struct specdef
{
	char *spec;
	void (*f)();
} specdef_t;
int _printf(const char *format, ...);
void print_to_console(char *str);

int catchar(char input);
int catstring(char *input);
#endif
