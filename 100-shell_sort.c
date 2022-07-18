#include "sort.h"

/**
 * _swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void _swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

/**
 * interval_sort - sort array with gaps
 * @array: array to be sorted
 * @size: size of array
 * @interval: interval size
 */
void interval_sort(int *array, size_t size, unsigned int interval)
{
	size_t i, j;

	for (i = interval; i < size; i++)
	{
		j = i;
		while (j >= interval && array[j] < array[j - interval])
		{
			_swap(array + j, array + j - interval);
			j -= interval;
		}
	}
}

/**
 * shell_sort - shell sort
 * @array: array to be sorted
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int interval = 1;

	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval >= 1)
	{
		interval_sort(array, size, interval);
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
