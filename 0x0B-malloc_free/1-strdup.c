#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * @str: input pointer
 * Return: NULL if str = NULL or a pointer to the duplicated string
 * if success
 */
char *_strdup(char *str)
{
	int strLen, i, incr;
	char *newString, *c;

	if (str == NULL)
		return (NULL);

	strLen = 0;
	incr = 0;
	c = str;
	while (str[incr] != '\0')
	{
		strLen++;
		incr++;
	}

	newString = malloc(sizeof(char) * (strLen + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= strLen; i++)
		newString[i] = str[i];

	return (newString);
}
