#ifndef _SORT_H_
#define _SORT_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**/
void print_array(const int *array, size_t size);

/**/
void print_list(const listint_t *list);


/**/
void bubble_sort(int *array, size_t size);

/**/
void insertion_sort_list(listint_t **list);

/**/
void selection_sort(int *array, size_t size);


/**/
void quick_sort(int *array, size_t size);


void quick_sort_print(int *array, size_t location, size_t size);


void shell_sort(int *array, size_t size);


void cocktail_sort_list(listint_t **list);


void swap_next(listint_t **list, int index);


void swap_prev(listint_t **list, int index);


void heap_sort(int *array, size_t size);
void swap(int *array, size_t i, size_t child, size_t total_size);
int heapify_down(int *array, size_t size);
void shift_down(int *array, size_t size, size_t total_size);
int check_array(int *array, size_t total_size);

#endif /* _SORT_H_ */
