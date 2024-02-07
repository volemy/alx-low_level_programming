#include "search_algos.h"

/**
 * jump_search - function that searches for a value in sorted array
 * using jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index value located if present, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	step = sqrt(size);
	prev = 0;

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
