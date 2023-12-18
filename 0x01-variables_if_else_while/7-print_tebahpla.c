#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char lower_case = 'z';

	while (lower_case >= 'a')
	{
		putchar(lower_case);
		lower_case--;
	}
	putchar('\n');
	return (0);
}
