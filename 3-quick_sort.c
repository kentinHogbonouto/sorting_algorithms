#include "sort.h"

/**
*_swap - Function that switch two variable
*
*@a: integer
*
*@b: intger
**/

void _swap(int *a, int *b)
{
int tmp;

tmp = *a
*a = *b;
*b = *a;
}

/**
*_split - Split the array and takes the last element as pivot
*@arr: Array
*@min: First argument
*@last: The last element
*@size: Size
*Return: integer
*/

int _split(int *arr, int min, int last, size_t size)
{
int piv;
int i = (min);
int j;

piv = arr[last];
for (j = min; j < last; j++)
{
if (arr[j] <= piv)
{
_swap(&arr[i], &arr[j]);
if (i != j)
print_array(arr, size);
i++;
}
}
_swap(&arr[i], &arr[last]);
if (i != j)
print_array(arr, size);
return (i);
}

/**
*quick_sort - Function that sort array element using quick sort algorithms
*@arr: arr
*@min: min
*@last: last
*@size: size
*Return: Nothing
*/
void quick_sort_array(int *arr, int min, int last, size_t size)
{
int piv;

if (min < last)
{
piv = _split(arr, min, last, size);
quick_sort_array(arr, min, (piv - 1), size);
quick_sort_array(arr, min, (piv + 1), size);
}
}

/**
*quick_sort - Fucntion that sort array element using quick sort algorithm
*@array: array of intger
*@size: size
**/
void quick_sort(int *array, size_t size)
{
if (size < 2)
return;
quick_sort_array(array, 0, size - 1, size);
}
