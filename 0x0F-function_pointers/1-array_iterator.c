#include "function_pointers.h"

/**
* array_iterator - execute a function given as a parameter
* @array: array
* @size: array size
* @action: pointer function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
