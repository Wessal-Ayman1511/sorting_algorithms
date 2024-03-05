#include "sort.h"


/**
 * selection_sort - sort array
 * @array: array
 * @size: array size
*/
void selection_sort(int *array, size_t size)
{
	size_t minIdx, i, j;
	int tmp;

	if (!array || !size || size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
		minIdx = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (array[j] < array[minIdx])
			{
				minIdx = j;
			}
		}
		if (minIdx != i)
		{
			tmp = array[i];
			array[i] = array[minIdx];
			array[minIdx] = tmp;
			print_array(array, size);
		}


	}
}
