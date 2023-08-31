#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to find the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_chars - Compares characters at two ends of a string
 * @s: The string to compare characters in
 * @start: The starting index to compare from
 * @end: The ending index to compare from
 *
 * Return: 1 if characters match, 0 otherwise
 */
int compare_chars(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (compare_chars(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (compare_chars(s, 0, length - 1));
}
