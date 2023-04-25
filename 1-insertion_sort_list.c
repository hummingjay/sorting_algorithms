#include "sort.h"

/**
 * inserion_sort_list - function that sorts doubly linked list
 * of int in ascending order using insertion sort algorithm
 *
 * @list: doubly linked list provided
 * Return: No return value in void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev;

	if (!list || !*list || !(*list)->next)
		return;

	curr = (*list)->next;
	while (curr)
	{
		prev = curr->prev;
		while (prev && prev->n > curr->n)
		{
			/*swap nodes*/
			prev->next = curr->next;
			if (curr->next)
				curr->next->prev = prev;
			curr->next = prev;
			curr->prev = prev->prev;
			prev->prev = curr;
			if (curr->prev)
				curr->prev->next = curr;
			else
				*list = curr;

			/*Print list*/
			print_list(*list);

			prev = curr->prev;
		}
		curr = curr->next;
	}
}
