#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to a list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
