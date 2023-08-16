#include "main.h"
#include <stdio.h>

void print_fibonacci(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci();
	putchar('\n');
	return (0);
}

void print_fibonacci(void)
{
	int count;
	unsigned long int prev, current, next;

	count = 2;
	prev = 1;
	current = 2;

	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');

	while (count < 98)
	{
		next = prev + current;
		printf(" %lu", next);

		prev = current;
		current = next;

		count++;
		if (count != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
