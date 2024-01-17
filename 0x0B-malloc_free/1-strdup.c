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
	int strLen, j;
	char *newString;

	if (str == NULL)
		return (NULL);

	strLen = 0;
	while (*str)
	{
		strLen++;
	}

	newString = malloc(sizeof(char) * (strLen + 1));

	for (j = 0; j <= strLen; j++)
		newString[j] = str[j];

	return (newString);
}