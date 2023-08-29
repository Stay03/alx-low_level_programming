#include "main.h"
#include <stddef.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to the string.
 * @to: Pointer to the string to set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
