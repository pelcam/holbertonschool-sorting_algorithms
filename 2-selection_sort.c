#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order using the Selection sort algorithm
* @array: array to sort
* @size: size of the array to sort
 */
void selection_sort(int *array, size_t size)
{
	int i, j, jMin, temp;
	int length = size;

	if (array == NULL)
		return;
	
	for (i = 0; i < length - 1; i++)
	{
		jMin = i;

		for (j = i + 1; j < length; j++)
		{
			if (array[i] < array[jMin])
				jMin = j;
		}
	}
	if (jMin =! i)
	{
		temp = array[jMin];
		array[jMin] = array[i];
		array[i] = temp;
	}
}
