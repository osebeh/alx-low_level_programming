#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @s: input int
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *spc = NULL;

	spc = malloc(b);

	if (spc ==NULL)
		exit(98);

	return (spc);
}