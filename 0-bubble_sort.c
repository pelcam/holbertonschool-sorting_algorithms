#include "sort.h"

/**
 *
 */

void bubble_sort(int *array, size_t size)
{

	size_t i = 0;
	size_t temp;

	while (i + 1 <= size - 1)
	{
		if (array[i] < array[i + 1])
			i++;
		else
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		}
	}
