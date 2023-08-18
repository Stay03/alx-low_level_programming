#include <stdio.h>

/**
 * main - Causes an infinite loop
 *
 * Description: This program demonstrates an infinite loop using a while loop.
 * It prints a warning message and then enters an infinite loop while the
 * variable `i` is less than 10. The loop is intentionally commented out to
 * avoid the infinite loop.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        /*
         * while (i < 10)
         * {
         *        putchar(i);
         * }
         */

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

