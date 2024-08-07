#include "sort.h"
void invert_array(int *array, size_t size);

/**
 * bubble_sort - check all array and invert
 * @array: array with value integer
 * @size: size of array
 * Return: return void
 */

void bubble_sort(int *array, size_t size)
{

	size_t j = 0;

	while (j + 1 <= size - 1)
	{
		if (array[j] < array[j + 1])
			j++;
		else
		{
			invert_array(array, size);
			j = 0;
		}
	}
}

/**
 * invert_array - invert two value
 * @array: array with integer values
 * @size: size of array
 * Return: return void
 */

void invert_array(int *array, size_t size)
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
			print_array(array, size);
			i++;
		}
	}
}
