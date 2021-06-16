#include "sort.h"

/**
* quick_sort - Algoritm to sort recursion
* @array: indicated the array to evaluated
* @size: size of array
*
* Return: size of array of type size_t
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_print (array, size, size);
}

/**
* quick_sort_print - algoritm to sort, recursion
* @array: int pointer to array for sort
* @location: position of the pivot type size_t
* @size: indicated a size of the array
*
* Return: void
*/
void quick_sort_print(int *array, size_t location, size_t size)
{
	int pivot;
	size_t i = 0, j = 0;
	int tmp;

	if (array == NULL)
		return;
	if (location == 0)
		return;

	pivot = array[location - 1];
	while (j < location)
	{
		if (array[j] > pivot)
		{
			i = j;
			while (j < location)
			{
				if (array[j] < pivot)
				{
					tmp = array[i], array[i] = array[j];
					array[j] = tmp, i++;
					print_array(array, size);
				}
				j++;
				if (j == location)
				{
					tmp = array[i], array[i] = array[j - 1];
					array[j - 1] = tmp, i++;
					print_array(array, size);
				}
			}
		}
		j++;
	}
	if (i < 2)
		quick_sort_print(array, location - 1, size);
	else
		quick_sort_print(array, i, size);
	}
