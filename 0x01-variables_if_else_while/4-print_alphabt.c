#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'd';
	char e = 'e';

	while (c <= 'z')
	{
		if (c != d && c != e)
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
