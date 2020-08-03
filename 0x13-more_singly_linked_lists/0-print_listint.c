#include "lists.h"

/**
 * print_listint - print list
 * @h: pointer
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	 unsigned int i;

	while (h != NULL)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
		printf("\n");
	}
	return (i);
}
