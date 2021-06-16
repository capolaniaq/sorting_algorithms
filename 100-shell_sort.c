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
 * shell_sort - sorts an array using shell sort algorithm
 * @array: The array to be sorted
 * @size: lenght of elements of array
 *
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int n = (int)size, i, j, h = 1;

	while (h < n / 3)
		h = 3 * h + 1;

	while (h >= 1)
	{
		for (i = h; i < n; i++)
		{
			for (j = i; j >= h && array[j] < array[j - h]; j -= h)
			{
				swap(&array[j], &array[j - h]);
			}
		}
		print_array(array, size);
		h /= 3;
	}
}
