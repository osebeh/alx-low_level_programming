#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @i: arguments
 * @j: arguments
 * Return: 0
 */
int main(int i, int **j)
{
	int num1, num2, total;

	if (i != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(j[1]);
		num2 = atoi(j[2]);
		total = num1 * num2;
		printf("%d\n", total);
		return (0);
	}
}
