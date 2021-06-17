#include "sort.h"

/**
 * counting_sort - sorts an array using counting sort algorithm
 * @array: The array to be sorted
 * @size: lenght of elements of array
 *
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	int i, j, k = 0, n = (int)size;
	int A[size], B[15], C[100];

	if (size < 2 || array == NULL)
		return;

	for (i = 1; i < n; i++)
	{
		A[i] = array[i];
		if (A[i] > k)
		{
			k = A[i];
		}
	}

	for (i = 0; i <= k; i++)
		C[i] = 0;
	for (j = 0; j < n; j++)
		C[array[j]] = C[array[j]] + 1;
	for (i = 0; i <= k; i++)
		C[i] = C[i] + C[i - 1];
	for (j = n - 1; j >= 1; j--)
	{
		B[C[array[j]]] = array[j];
		C[array[j]] = C[array[j]] - 1;
	}
	print_array(C, k + 2);
}
