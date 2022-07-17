#include <stdio.h>

/**
*bubble_sort - Function that sort an array element using bubble sort algorithm
*
*return: always return a new array with order list 
*/

void bubble_sort(int *array, size_t size)
{
int temp;
for(int i = 0; i < array.lenght; i++){
if(array[i] > *array[i + 1]){
temp = *array[i];
*array[i + 1] = *array[i];
*array[i] = temp;
}
}
}