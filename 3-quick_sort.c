#include "sort.h"

/**
*lomuto_tri - sort 
* @array: array to sort
* @size: size of the array to sort
* @low: first part of the array separated by pivot
* @high: second part of the array separated by pivot
* Return: 
*/
int lomuto_tri(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int j, temp;
	int i = low;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;

				print_array(array, size);
			}
			i++;
		}
	}

	if (i != high)
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;

		print_array(array, size);
	}

	return (i);
}

/**
* quick_sort_recursive -
*/
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int i = lomuto_tri(array, size, low, high);
		quick_sort_recursive(array, size, low, i - 1);
		quick_sort_recursive(array, size, i - 1, high);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 2)
	{
		return;
	}
	quick_sort_recursive(array, size, 0, size - 1);
}
