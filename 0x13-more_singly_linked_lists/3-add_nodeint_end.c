#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: double pointer
 * @n: integer
 * Return: the adress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	struct listint_s *end = NULL;
	struct listint_s *aux = NULL;

	end = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
	} else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = end;
	}
	return (end);

}
