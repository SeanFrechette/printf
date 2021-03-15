#include "holberton.h"
/**
 * rot13 - converts string to rot13
 * @s: string
 * Return: Rot13 string
 */
void rot13(char *s)
{
	int x, y;
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; alpha[y] != '\0'; y++)
		{
			if (s[x] == alpha[y])
			{
				_putchar(rot13[y]);
				break;
			}
		}
	}
}
