#include "main.h"

/**
 * wildcmp - Compares two strings if they can be considered identical
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If we reach the end of both strings, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match, move to next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If s2 is *, try to match the rest of s1 or s2 */
	if (*s2 == '*')
	{
		/* Try to match the rest of s1 and s2 */
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	/* If none, the strings are different */
	return (0);
}

