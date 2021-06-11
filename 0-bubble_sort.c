#include "sort.h"

/**
 * bubble_sort - Function that print the swap to bouble sort
 * @array: int pointer
 * @size: size of array type size_t
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int tmp = 0;
	int count = 0;

	while (count == 0)
	{
		while (array && i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				count = 1;
			}
			i++;
		}
		if (count == 1)
		{
			i = 0;
			count = 0;
		}
		else if (count == 0)
		{
			count = 1;
		}

	}
}
