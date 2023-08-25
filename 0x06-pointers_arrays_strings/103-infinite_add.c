#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the result buffer
 *
 * Return: The pointer to the result, or 0 if the result can not be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (size_r <= len1 || size_r <= len2)
		return (0);

	r[size_r - 1] = '\0';

	i = len1 - 1;
	j = len2 - 1;
	size_r -= 2;

	while (i >= 0 || j >= 0 || carry != 0)
	{
		sum = carry;

		if (i >= 0)
			sum += (n1[i] - '0');
		if (j >= 0)
			sum += (n2[j] - '0');

		carry = sum / 10;

		if (size_r <= 0)
			return (0);

		r[size_r] = (sum % 10) + '0';

		i--;
		j--;
		size_r--;
	}

	return (r + size_r + 1);
}

