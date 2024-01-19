#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: lowest integer
 * @max: highest integer
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *a, max_min, i;

	if (min > max)
		return (NULL);

	max_min = max - min;
	a = malloc((max_min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < max_min; i++)
		a[i] = min++;

	return (a);
}
