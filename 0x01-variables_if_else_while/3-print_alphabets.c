#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c <= 'Z')
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
