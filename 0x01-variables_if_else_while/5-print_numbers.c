#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 'O');
		num++;
	}
	putchar('\n');

	return (0);
}
