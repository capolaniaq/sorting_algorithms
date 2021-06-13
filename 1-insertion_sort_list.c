#include "sort.h"

/**
 * node_swap - swap nodes of a doubly linked list
 * @x: left node
 * @y: right node
 *
 * Return: nothing
 */
void node_swap(listint_t *x, listint_t *y)
{
	listint_t *xprev = NULL;
	listint_t *ynext = NULL;

	if (x->prev != NULL)
	{
		xprev = x->prev;
		x->prev->next = y;
	}

	if (y->next != NULL)
	{
		ynext = y->next;
		y->next->prev = x;
	}

	x->prev = y;
	x->next = ynext;
	if (xprev == NULL)
		y->prev = NULL;

	y->next = x;
	y->prev = xprev;
	if (ynext == NULL)
		x->next = NULL;
}

/**
 * insertion_sort_list - sort nodes of a doubly linked list
 * @list: doubly linked list to be sorted
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pos, *rev;

	if (list == NULL || *list == NULL)
		return;
	for (pos = *list; pos->next != NULL; pos = pos->next)
	{
		if (pos->n > pos->next->n)
		{
			node_swap(pos, pos->next);
			while ((*list)->prev != NULL)
				*list = (*list)->prev;
			print_list(*list);
			pos = pos->prev;
			rev = pos;
			while (rev->prev != NULL)
			{
				if (rev->n < rev->prev->n)
				{
					node_swap(rev->prev, rev);
					while ((*list)->prev != NULL)
						*list = (*list)->prev;
					print_list(*list);
				}
				else
					break;
			}
		}
	}
}
