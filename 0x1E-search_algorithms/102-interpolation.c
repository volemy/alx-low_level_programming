#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers
 * @arr: Array of integers
 * @arr_size: Number of elements in the array
 * @target: Value to search for
 *
 * Return: Index of the first occurrence of the target value,
 *         or -1 if not found
 */
int interpolation_search(int *arr, size_t arr_size, int target)
{
	size_t low, high, mid;

	if (arr == NULL)
		return (-1);

	low = 0;
	high = arr_size - 1;


	while (low <= high && target >= arr[low] && target <= arr[high])
	{
		mid = low + (((double)(high - low) /
					(arr[high] - arr[low])) *
				(target - arr[low]));

		printf("Checking arr[%lu] = [%d]\n", mid, arr[mid]);

		if (arr[mid] == target)
			return (mid);

		if (arr[mid] < target)
			low = mid + 1;
		else
			high = mid - 1;
	}
	printf("Value at arr[%lu] is out of range\n", low);
	return (-1);
}
