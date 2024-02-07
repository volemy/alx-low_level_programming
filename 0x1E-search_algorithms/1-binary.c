#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to search for
 * Return: value location, NUll if missing, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, l_half, u_half;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	l_half = 0;
	u_half = size - 1;

	while (l_half <= u_half)
	{
		printf("searching in array: ");
		for (idx = l_half; idx <= u_half; idx++)
		{
			printf("%d, ", array[idx]);
		}
		printf("\n");

		mid = (l_half + u_half) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			l_half = mid + 1;
		}
		if (array[mid] > value)
		{
			u_half = mid - 1;
		}
	}

	return (-1);

}
