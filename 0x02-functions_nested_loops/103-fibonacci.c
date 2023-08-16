#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    long int fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 2;

    for (i = 3; fib_sum <= 4000000; i++)
    {
        fib_sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_sum;

        if (fib_sum % 2 == 0)
        {
            even_sum += fib_sum;
        }
    }

    printf("%ld\n", even_sum);

    return 0;
}
