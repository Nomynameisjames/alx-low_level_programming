#include "search_algos.h"
/**
 * func - Function defination of a linear search Algorithm
 *
 * Return - 0 successful -1 item not found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	if (!array)
		return -1;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d]\n", i);
		if (array[i] == value)
		{	
			return (i);
		}
	}

	return -1;
}
