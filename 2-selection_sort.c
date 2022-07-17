#include "sort.h"

/**
*select_sort - Function that sort array using selection algorithm
*
*@array: First argument
*
*@size: Second argument
*
*return: Amways 0
*/

void selection_sort(int *array, size_t size)
{
    int i, j, min;

    if(size == NULL || SIZE < 2)
    return;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++){
            if (array[min] > array[i])
            {
                min = j;
            }
        }
        if (min != i)
        {
            min = array[j];
            array[j] = array[j + 1];
            array[j + 1] = min
        }
    }
}