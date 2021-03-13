#ifndef HOLBERTON_H
#define HOLBERTON_H
typedef struct specdef
{
	char *spec;
	void (*f)();
} specdef_t;
int _printf(const char *format, ...);
void print_to_console(char *str);
#endif