#include <stdlib.h>
#include <stdio.h>

/**
* print_array - Prints an array of integers
*
* @array: The array to be printed
* @size: Number of elements in @array
*/
void print_array(const int *array, size_t size)
{
<<<<<<< HEAD
size_t i;

i = 0;
while (array && i < size)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
++i;
}
printf("\n");
=======
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
		printf(", ");
	printf("%d", array[i]);
	++i;
	}
	 printf("\n");
>>>>>>> 24a9282348b433f6dbae4b9c0a7cba0029fd474b
}
