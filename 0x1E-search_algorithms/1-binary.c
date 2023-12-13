#include "search_algos.h"

/**
 * binary_search - searches using a binary search algorithm
 * 
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: index containing `value`, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int small, middle, big;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	small = 0;
	big = size - 1;

	while (small <= big)
	{
		middle = (small + big) / 2;

		printf("Searching in array: ");
		for (x = small; x <= big; x++)
			printf("%i%s", array[x], x == big ? "\n" : ", ");

		if (array[middle] < value)
			small = middle + 1;
		else if (array[middle] > value)
			big = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
