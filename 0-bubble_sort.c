#include "sort.h"
#include<stddef.h>

/**
* bubble_sort - sorts array in of integers in  ascending order
* using bubble sort.
* @array: array to be sorted
* @size: size of array
*
* Return: array
*/
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
