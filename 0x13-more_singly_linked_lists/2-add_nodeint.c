#include "lists.h"

/**
 * add_nodeint - add new node at the beginning
 * @head: double pointer
 * @n: integer
 * Return: the adress
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *ptr = NULL;

	ptr = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
