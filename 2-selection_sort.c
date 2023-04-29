#include "sort.h"

/**
 * selection_sort - function that sorts array of integers
 * ascending using selection sort algorithm
 *
 * @array: pointer to array of input values
 * @size: size of the input array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_num;
	int temp;

	/* Start loop to check from beginning*/
	for (i = 0; i < size; i++)
	{
		min_num = i;
		/* Looping thru array to compare then swap value */
		for (j = i + 1; j < size; j++)
		{
			/* If current value less than original i change assignment*/
			if (array[j] < array[min_num])
			{
				min_num = j;
			}
		}
		/* Swaping the values */
		if (min_num != i)
		{
			temp = array[i];
			array[i] = array[min_num];
			array[min_num] = temp;
			print_array(array, size);
		}
	}
}
