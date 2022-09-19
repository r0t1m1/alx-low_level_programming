#include "man.h"

void swap_int(int *a, int *b)
{
	int _a, _b;

	_b = *a;
	_a = *b;

	*a = _a;
	*b = _b;
}
