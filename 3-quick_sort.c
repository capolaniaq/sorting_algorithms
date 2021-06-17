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
	int i = (low - 1), j;

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
