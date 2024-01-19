#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory
 * @nmemb: memory spaces to eb allocated
 * @size: size of the memory spaces
 * Return: NULL on fail or pointer to allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *spc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	spc = malloc(nmemb * size);

	if (spc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		spc[i] = 0;

	return (spc);
}
