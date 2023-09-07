#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	new_str = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, s1);
	strcpy(new_str + s1_len, s2);

	return (new_str);
}
