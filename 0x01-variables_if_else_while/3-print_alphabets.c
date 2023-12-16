#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char c_low = 'a';
	char c_upper = 'A';

	while (c_low <= 'z')
	{
		putchar(c_low);
		c_low++;
	}
	while (c_upper <= 'Z')
	{
		putchar(c_upper);
		c_upper++;
	}
	putchar('\n');

	return (0);
}
