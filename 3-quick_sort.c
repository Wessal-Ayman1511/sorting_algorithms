#include "sort.h"

/**
 * partition - scans a partition of an array of integers 
 * @arr: input
 * @l: input
 * @h: input
 * @size: input
 * Return: new index at which to start new recursive partition
 */
int partition(int *arr, int l, int h, size_t size)
{
	int i, j, pivot, temp;

	pivot = arr[h];
	i = l;
	for (j = l; j < h; j++)
	{
		if (arr[j] < pivot)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			if (arr[i] != arr[j])
				print_array(arr, size);
			i++;
		}
	}
	temp = arr[i];
	arr[i] = arr[h];
	arr[h] = temp;
	if (arr[i] != arr[h])
		print_array(arr, size);
	return (i);
}

/**
 * quicksort - recursively sorts array 
 * @arr: input
 * @low: input
 * @high: input
 * @size: array size
 */
void quicksort(int *arr, int l, int h, size_t size)
{
	int p;

	if (l < h)
	{
		p = partition(arr, l, h, size);
		quicksort(arr, l, p - 1, size);
		quicksort(arr, p + 1, h, size);
	}
}

/**
 * quick_sort - sorts an array 
 * @array: input
 * @size: input
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quicksort(array, 0, (int)size - 1, size);
}
