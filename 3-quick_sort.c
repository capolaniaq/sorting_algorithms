#include "sort.h"

/**
 * swap - swap integer numbers of an array
 * @a: The array to be sorted
 * @b: starting index of array
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - do partition and swap elements
 * @array: The array to be sorted
 * @low: starting index of array
 * @high: ending index of array
 * @size: size of the array
 *
 * Return: integer pivot
 */
int partition(int *array, int low, int high, size_t size)
{
<<<<<<< HEAD
	int pivot;
	size_t i = 0, j = 0;
	int tmp;

	if (array == NULL)
		return;
	if (location == 0)
		return;
=======
	int i = (low - 1), j;
>>>>>>> 11367f61b7221aaf9e348d12869564be6404af47

	for (j = low; j < high; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			if (j != i)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
<<<<<<< HEAD
	if (i < 2)
		quick_sort_print(array, location - 1, size);
	else
		quick_sort_print(array, i, size);
	}
=======
	if (array[high] < array[i + 1])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * sort - take pivots from partitions to sort
 * @array: The array to be sorted
 * @low: starting index of array
 * @high: ending index of array
 * @size: size of the array
 *
 * Return: nothing
 */
void sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		sort(array, low, pi - 1, size);
		sort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - sort an integer array with Lomuto partition scheme
 * @array: The array to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
	{
		return;
	}
	sort(array, 0, (int)size - 1, size);
}
>>>>>>> 11367f61b7221aaf9e348d12869564be6404af47
