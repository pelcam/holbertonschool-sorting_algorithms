#include "sort.h"

/**
 * insertion_sort_list - function for use insertion sort
 * @list: list of node
 * Return: return void
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *current;
	listint_t *tmp;

	if (list == NULL)
		return;

	if ((*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		tmp = current->prev;

		while (tmp != NULL &&
				current->n < tmp->n)
		{
			if (tmp->prev != NULL)
				tmp->prev->next = current;
			else
				*list = current;

			if (current->next != NULL)
				current->next->prev = tmp;

			current->prev = tmp->prev;
			tmp->next = current->next;
			current->next = tmp;
			tmp->prev = current;

			tmp = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
