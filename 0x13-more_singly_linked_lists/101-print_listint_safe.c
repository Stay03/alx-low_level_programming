#include "lists.h"
#include <stdlib.h>

/**
 * _print_number - Prints an integer using only _putchar.
 * @n: The integer to print.
 */
void _print_number(int n)
{
    unsigned int num;

    num = n;
    if (n < 0)
    {
        _putchar('-');
        num = (unsigned int)-n;
    }

    if (num / 10)
        _print_number(num / 10);

    _putchar((num % 10) + '0');
}

/**
 * print_listint_safe - Safely prints a `listint_t` linked list.
 * @head: A pointer to the start of the list.
 *
 * Return: The number of nodes in the list. Exits with status 98 if a loop is detected.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow_ptr, *fast_ptr, *print_ptr;
    size_t nodes = 0;

    slow_ptr = fast_ptr = head;
    while (slow_ptr && fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        if (slow_ptr == fast_ptr)
        {
            exit(98);
        }
    }

 
    print_ptr = head;
    while (print_ptr)
    {
        _putchar('[');
        _print_number((unsigned long)print_ptr);
        _putchar(']');
        _putchar(' ');
        _print_number(print_ptr->n);
        _putchar('\n');

        print_ptr = print_ptr->next;
        nodes++;
    }

    return nodes;
}

