#include "main.h"

/**
 * print_times_table - Prints the n times table, starting from 0
 * @n: The number we want to print the times table for
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				print_result(i * j);
			}
			_putchar('\n');
		}
	}
}

/**
 * print_result - Prints the result with proper formatting
 * @result: The result to be printed
 */
void print_result(int result)
{
	if (result >= 100)
	{
		_putchar('0' + (result / 100));
		_putchar('0' + ((result / 10) % 10));
		_putchar('0' + (result % 10));
	}

	else if (result >= 10)
	{
		_putchar(' ');
		_putchar('0' + (result / 10));
		_putchar('0' + (result % 10));
	}

	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + result);
	}
}
