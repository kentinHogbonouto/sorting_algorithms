#include "sort.h"

/**
 * _swap - swap two numbers
 * @a: integer
 * @b: integer
 **/
void _swap(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
*selection_sort - Function that sort array using selection algorithm
*
*@array: First argument
*
*@size: Second argument
*
*return: Amways 0
*/

void selection_sort(int *array, size_t size)
{
unsigned int i, j, min;

if (array == NULL || size < 2)
return;
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
{
if (array[min] > array[i])
{
min = j;
}
}
if (min != i)
{
_swap(&array[i], &array[min]);
print_array(array, size);
}
}
}
