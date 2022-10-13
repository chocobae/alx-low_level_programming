#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter.
* @arrayi: pointer to array
* @size: size of array
* @action: function to call for each element of array
*
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
