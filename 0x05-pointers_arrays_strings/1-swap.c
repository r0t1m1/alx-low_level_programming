#include "main.h"
/**
 * swap_int - swap the value of two int variables
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int _a, _b;

	_b = *a;
	_a = *b;

	*a = _a;
	*b = _b;
}
