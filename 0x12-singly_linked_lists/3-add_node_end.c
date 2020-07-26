#include "lists.h"

/**
 * *add_node_end - add node at the end
 * @head: double pointer to head
 * @str: pointer to string
 *
 * Return: Adress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	struct list_s *end = NULL;
	struct list_s *alt = NULL;
	int i;

	end = (struct list_s *)malloc(sizeof(struct list_s));
	if (end == NULL)
	{
		return (NULL);
	}
	end->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	end->len = i;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
	}
	else
	{
		alt = *head;
		while (alt->next != NULL)
		{
			alt = alt->next;
		}
		alt->next = end;
	}
	return (end);
}
