#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototype */
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void print_list(const list_t *h);  /* Assuming this function is defined in 0-print_list.c */

#endif /* LISTS_H */

