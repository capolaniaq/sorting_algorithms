#include "sort.h"

/**
* selection_sort - Funtion that sort the array with algoritm selection
* @array: pointer to the array
* @size: size_t type size of the array
*
* Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int least, position = 0;
	int tmp = 0;

	for (i = 0; i <= size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				if (array[j] < tmp)
				{
					tmp = array[j];
					position = j;
				}
				else if (tmp == 0)
				{
					tmp = array[j];
					position = j;
				}
			}
		}
		if (tmp != 0)
		{
			least = array[i];
			array[i] = tmp;
			array[position] = least;
			print_array(array, size);
			tmp = 0;
		}
	}
}
