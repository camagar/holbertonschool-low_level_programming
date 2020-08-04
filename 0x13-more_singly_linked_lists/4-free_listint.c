#include "lists.h"

/**
 * free_listint -free a list
 * @head: pointer to a list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	struct listint_s *temp = NULL;
	struct listint_s *aux =  NULL;

	temp = head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
	head = NULL;
}
