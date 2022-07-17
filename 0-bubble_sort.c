#include "sort.h"
#include <stddef.h>

/**
*bubble_sort - Function that sort an array element using bubble sort algorithm
*
*@array: The array which contain the list of element that can be sort
*@size: Size of array
*
*return: always return a new array with order list
*/

void bubble_sort(int *array, size_t size)
{
int temp;
size_t i , j;
if (array == NULL)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
