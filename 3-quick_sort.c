#include "sort.h"

/**
 * swap - swaps 2 values
 * @x: Value to be swapped
 * @y: Value to be swapped
 *
 * Return: Nothing
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * quicksort_recursion - Sorts an array using the Quicksort algorithm recursively
 * @array: Pointer to the array to be sorted
 * @low: The index of the first element in the array
 * @high: The index of the last element in the array
 *
 * Return: Nothing
 */

void quicksort_recursion(int *array, int low, int high)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high);
		quicksort_recursion(array, low, pivot_index - 1);
		quicksort_recursion(array, pivot_index + 1, high);
	}
}
/**
 * partition - Helper function for quicksort_recursion to partition the array.
 * @array: Pointer to the array to be partitioned.
 * @low: The index of the first element in the array.
 * @high: The index of the last element in the array.
 *
 * Return: The index of the pivot element
 */
int partition(int *array, int low, int high)
{
	int pivot_value, i, j;

	i = low;
	pivot_value = array[high];
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++
		}
	}
	swap(&array[i], &array[high]);
	return (i);
}
/**
 * quick_sort - Sorts an array of integers in ascending order
 * Using the Quick sort algorithm
 * @array: Array to be sorted
 * @size: size of the array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1)
}
