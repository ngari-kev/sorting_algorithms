#include "sort.h"

/*
 * bubble_sort - Sorts an array of integers using the Bubble Sort algorithm.
 * @array - the array to be sorted
 * @size - the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /*Flag to optimize by checking if any swaps are made in a pass*/
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/*Swap elements if they are in the wrong order*/
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = 1; /*  Set flag to indicate a swap occurred*/
			}
		}
		/*If no swaps occurred, the array is already sorted*/
		if (!swapped)
		{
			break;
		}
	}
}
