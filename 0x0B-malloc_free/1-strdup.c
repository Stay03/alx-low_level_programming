#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: If str is NULL or if memory allocation fails - NULL,
 *         Otherwise - a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
