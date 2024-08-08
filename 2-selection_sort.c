#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order using the Selection sort algorithm
* @array: array to sort
* @size: size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jMin, temp;

	if (array == NULL)
		return;
	
	for (i = 0; i < size; i++)
	{
		jMin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
				jMin = j;
		}
		if (jMin != i)
		{
			temp = array[jMin];
			array[jMin] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
