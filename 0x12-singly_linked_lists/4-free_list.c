#include "lists.h"

/**
 * free_list - free the list
 * @head: pointer
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	struct list_s *rec = NULL;
	struct list_s *a = NULL;

	rec = head;
	while (rec != NULL)
	{
		a = rec->next;
		free(rec->str);
		free(rec);
		rec = a;
	}
	head = NULL;
}
