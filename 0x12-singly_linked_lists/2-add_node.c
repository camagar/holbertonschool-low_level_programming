#include "lists.h"

/**
 * *add_node - add a new node at the beginning
 * @head: double pointer
 * @str: pointer
 *
 * Return: Adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	struct list_s *temp = NULL;
	int i;

	temp = (struct list_s *)malloc(sizeof(struct list_s));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	for (i = 0; str[i] != '\0', i++)
	{
	}
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);
}
