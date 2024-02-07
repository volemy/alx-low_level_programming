#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of array to search for
 * @size: Number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
			if (array[idx] == value)
				return (idx);
	}
	return (-1); /* value not found */
}
