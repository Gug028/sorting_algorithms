#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 * @list: double linked list
 */
void insertion_sort_list(listint_t **list)
{
	int key;
	listint_t *tmp;

	if (!list)
		return;
	tmp = *list;
	while (tmp)
	{
		while (tmp)
		{
			if (tmp->next)
			{
				if (tmp->n > tmp->next->n)
				{
					key = tmp->n;
					*(int *)&tmp->n = tmp->next->n;
					*(int *)&tmp->next->n = key;
					tmp = *list;
					print_list(*list);
					break;
				}
			}
			tmp = tmp->next;
		}
	}
}
