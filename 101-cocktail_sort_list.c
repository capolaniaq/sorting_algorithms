#include "sort.h"

/**
* cocktail_sort_list - Function the algorimth to sort cocktail
* @list: listint_t linked list to sort
*
* Return: void
*/

void cocktail_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *tmp_next = NULL, *tmp_prev = NULL;
	int index = 0, skip = 0;

	if (list == NULL || *list == NULL)
		return;
	tmp = *list;
	while (tmp != NULL)
	{
		tmp_next = tmp->next;
		if (tmp->next == NULL)
			return;
		if (tmp->n > tmp_next->n)
		{
			swap_next(list, index);
			tmp = tmp->prev;
		}
		if (tmp->next->next == NULL)
		{
			while (tmp != NULL)
			{
				tmp_prev = tmp->prev;
				if (tmp->n < tmp_prev->n)
				{
					swap_prev(list, index);
					tmp = tmp->next;
				}
				tmp = tmp->prev, index--;
				if (index == 0)
				{
					index--, skip++;
					break;
				}
			}
		}
		else
			tmp = tmp->next;
		index++;
		if (skip > 2)
			return;
	}
}

/**
 * swap_next - function to swap the node-next
 * @list: listint_t linked list to sort
 * @index: integer to refer the node
 *
 * Return: void
 */

void swap_next(listint_t **list, int index)
{
	listint_t *tmp_prev = NULL;
	listint_t *tmp_half = NULL;
	listint_t *tmp_next = NULL;
	int i = 0;

	if (list == NULL || *list == NULL)
		return;
	tmp_prev = *list;
	while (i < index)
	{
		i++;
		if (i == index)
		{
			tmp_half = tmp_prev->next;
			tmp_next = tmp_half->next;
			tmp_prev->next = tmp_next;
			if (tmp_next->next == NULL)
				tmp_half->next = NULL;
			else
				tmp_half->next = tmp_next->next;
			tmp_half->prev = tmp_next;
			tmp_next->prev = tmp_prev;
			tmp_next->next = tmp_half;
		}
		tmp_prev = tmp_prev->next;
	}
	print_list(*list);
}

/**
 * swap_prev - swap the nodes in the reverse loop
 * @list: listint_t linked list to sort
 * @index: integer to indicated the node
 *
 * Return: void
 */

void swap_prev(listint_t **list, int index)
{
	listint_t *tmp_list = NULL;
	listint_t *tmp_prev = NULL;
	listint_t *tmp_half = NULL;
	listint_t *tmp_next = NULL;
	int i = 0;

	if (list == NULL || *list == NULL)
		return;
	tmp_list = *list;
	while (i < index)
	{
		i++;
		tmp_list = tmp_list->next;
		if (i == index)
		{
			tmp_next = tmp_list->next;
			tmp_half = tmp_list->prev;
			if (tmp_half->prev != NULL)
				tmp_prev = tmp_half->prev;
			tmp_list->next = tmp_half;
			tmp_list->prev = tmp_prev;
			tmp_next->prev = tmp_half;
			tmp_half->next = tmp_next;
			tmp_half->prev = tmp_list;
			if (tmp_prev != NULL)
				tmp_prev->next = tmp_list;
			else
				*list = tmp_list;
		}
	}
	print_list(*list);
}
