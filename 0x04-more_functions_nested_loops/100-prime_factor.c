#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of the number
 */
unsigned long int largest_prime_factor(unsigned long int n)
{
	unsigned long int i;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}

	if (n > 2)
		return (n);
	else
		return (2);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int largest_prime;

	largest_prime = largest_prime_factor(num);

	printf("%lu\n", largest_prime);

	return (0);
}
