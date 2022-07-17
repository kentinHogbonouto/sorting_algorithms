#include <stdio.h>

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
for (int i = 0; i < len(array); i++)
{
if (array[i] > *array[i + 1])
{
temp = *array[i];
*array[i] = *array[i + 1];
*array[i + 1] = temp;
}
}
}
