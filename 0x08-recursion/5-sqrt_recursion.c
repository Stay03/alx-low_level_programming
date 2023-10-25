#include "main.h"

/**
 * helper - Helper function to calculate the square root recursively
 * @n: The number to calculate the square root of
 * @guess: The guess for the square root
 *
 * Return: The natural square root of n
 */
int helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, 0));
}

