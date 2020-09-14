#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: pointer to previous node
 * @next: pointer to next node
 * 
 * Description: doubly linked list node structure
 * for Holberton project
 */

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
};


size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
