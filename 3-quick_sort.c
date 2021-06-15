#include "sort.h"
#define Getsize(array) (sizeof(array)/sizeof(array[0]))

/**
* size_array - function to evaluated the size of array
* @array: indicated the array to evaluated
* @size: size of array
*
* Return: size of array of type size_t
*/
size_t size_array(int *array, const size_t size)
{
	size_t i = 0;

	if (array == NULL)
		return (0);

	while (array[i] || i < size)
	{
		i++;
	}

	return (i);
}

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
<<<<<<< HEAD
	size_t i = 0, j = 0, n = Getsize(array);
=======
	size_t i = 0, j = 0, n = size_array(array, size);
>>>>>>> 8acfdd816f5e9bcff3dff0f05aaad1ee11bd0eb2
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
					print_array(array, n);
				}
				j++;
				if (j == size)
				{
					tmp = array[i], array[i] = array[j - 1];
					array[j - 1] = tmp, i++;
					print_array(array, n);
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
<<<<<<< HEAD

/**
* size_array - function to evaluated the size of array
* @array: idicated the array to evaluated
*
* Return: size of array of type size_t
*/
/*
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
*/
=======
>>>>>>> 8acfdd816f5e9bcff3dff0f05aaad1ee11bd0eb2
