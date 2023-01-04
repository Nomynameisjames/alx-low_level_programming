#include "search_algos.h"
/**
 * func - Function defination of a linear search Algorithm
 *
 * Return - 0 successful -1 item not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t  i = 0;
	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (value == array[i])
		{	
			return (i);
		}
	}

	return (-1);
}
