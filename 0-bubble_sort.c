#include "sort.h"
/**
 * bubble_sort- function that bubble sort the array
 * @array: input
 * @size: input
 * Return: sorted array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (!array || !size)
	return;

	int i = 0;
	while (i < size)
	{
		for (j = 0 ; j < size - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
