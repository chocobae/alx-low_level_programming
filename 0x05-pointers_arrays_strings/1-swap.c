#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: first integer
* @b: second integrr
* Return:returns void
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
