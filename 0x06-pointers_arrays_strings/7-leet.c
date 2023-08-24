#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: The resulting encoded string
 */
char *leet(char *str)
{
	int i, j;
	char replacements[5] = "AEOTL";
	char leet_nums[5] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; replacements[j] != '\0'; j++)
		{
			if (str[i] == replacements[j] || str[i] == replacements[j] + 32)
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}

	return (str);
}
