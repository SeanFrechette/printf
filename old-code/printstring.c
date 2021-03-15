#include <unistd.h>
#include <string.h>
/**
 * printstring - prints a string using write
 * @str: some string
 */
void printstring(char *str)
{
	write(1, str, strlen(str));
}
