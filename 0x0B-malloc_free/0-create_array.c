#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 * @size: array size
 * @c: char to aray that has been initialized
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
