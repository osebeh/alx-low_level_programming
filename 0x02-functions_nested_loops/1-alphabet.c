#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - contains program that prints alphabets a - z
 * Return: no return value because it's a void
 */
void print_alphabet(void)
{

char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

putchar(alphabet);

putchar('\n');
}

/**
 * main - primary function
 * Return: zero because it only prints out
 * contents of the print_alpha*bet() function
 */
int main(void)
{

print_alphabet();

return (0);
}


