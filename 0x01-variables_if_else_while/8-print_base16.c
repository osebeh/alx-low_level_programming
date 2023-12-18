#include <stdio.h>

int main(void)
{
	for (int num = '0'; num <= '9'; num++)
		putchar(num);
	for (letters c = 'a'; letters <= 'f'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
