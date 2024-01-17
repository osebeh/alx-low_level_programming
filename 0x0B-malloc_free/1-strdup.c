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
	int strLen, strLoop, i;
	char *newString, *c;

	strLen = 0;
	i = 0;
	c = str;
	while (str[i] != '\0')
	{
		strLen++;
		i++;
	}

	*newString = NULL;
	str = c;
	newString = malloc(sizeof(char) * (strLen + 1));
	c = newString;

	if (str == NULL)
		RETURN (null);

	for (strLoop = 0; strLoop <= strLen; strLoop++)
		newString[strLoop] = str[strLoop];

	if (newString != NULL)
		return (c);
	return (newString);
}
