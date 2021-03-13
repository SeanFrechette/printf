#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
typedef struct specdef
{
	char *spec;
	char ** (*f)();
} specdef_t;
int _putchar(char c);
int _printf(const char *format, ...);
void print_to_console(char *str, int a);

/*int catchar(char input);*/
/*int catstring(char *input);*/
#endif
