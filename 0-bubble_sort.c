#include <stdio.h>
#include "sort.h"
#include "print_array.c"

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
size_t i , len = size;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
}
}
