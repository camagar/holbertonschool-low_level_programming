#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: first element of the list
 * Return: elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
