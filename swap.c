#include "sort.h"

/**
 * swap - swap number
 * @a: number a
 * @b: number b
 *
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
