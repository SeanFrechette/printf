#include <fcntl.h>
#include <stdlib.h>
/**
 * print_to_console - prints to console from buffer using write
 * @s: input string
 */
void print_to_console(char *s)
{
	char buf1[1024] = s;

	write(1, buf1, strlen(s));
}
