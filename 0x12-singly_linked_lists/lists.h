#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - list of struct nodes
 * @len: length
 * @str: string
 * @next: linked node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void first(void) __attribute__ ((constructor));
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif
