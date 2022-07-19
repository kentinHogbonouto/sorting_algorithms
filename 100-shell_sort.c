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
 * @n: interval size
 */
void interval_sort(int *array, size_t size, unsigned int n)
{
	size_t i, j;

	for (i = n; i < size; i++)
	{
		j = i;
		while (j >= n && array[j] < array[j - n])
		{
			_swap(array + j, array + j - n);
			j -= n;
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
	unsigned int n = 1;

	if (!array || size < 2)
		return;

	while (n < size / 3)
		n = n * 3 + 1;

	while (n > 0)
	{
		interval_sort(array, size, n);
		n = (n - 1) / 3;
		print_array(array, size);
	}
}
