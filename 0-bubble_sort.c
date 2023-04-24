#include "sort.h"

/**
 * bubble_sort - function that sorts an array of int
 * using Bubble sort algorithm
 *
 * @array: pointer to array of integers
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n = size;
	int swp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		/* Second loop will avoid it going over bubbled part*/
		for (j = 0; j  < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swp;
				print_array(array, n);
			}
		}
	}
}
