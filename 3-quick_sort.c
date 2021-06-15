#include "sort.h"

/**
* quick_sort - algoritm to sort, recursion
* @array: int pointer to array for sort
* @size: the size_t indicated the size of array
*
* Return: void
*/

void quick_sort(int *array, size_t size)
{
	int pivot;
	size_t i = 0, j = 0, n = size_array(array);
	int tmp;

	if (array == NULL)
		return;
	if (size < 2)
		return;
	pivot = array[size - 1];
	while (j < size)
	{
		if (array[j] > pivot)
		{
			i = j;
			while (j < size)
			{
				if (array[j] < pivot)
				{
					tmp = array[i], array[i] = array[j];
					array[j] = tmp, i++;
					print_array(array, n - 2);
				}
				j++;
				if (j == size)
				{
					tmp = array[i], array[i] = array[j - 1];
					array[j - 1] = tmp, i++;
					print_array(array, n - 2);
				}
			}
		}
		j++;
	}
	if (i == 0)
		quick_sort(array, size - 1);
	else
		quick_sort(array, size);
}

/**
* size_array - function to evaluated the size of array
* @array: idicated the array to evaluated
*
* Return: size of array of type size_t
*/

size_t size_array(int *array)
{
	size_t i = 0;

	if (array == NULL)
		return (0);

	while (*(array + i) != '\0')
	{
		i++;
	}

	return (i);
}
