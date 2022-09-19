#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print reversed string
 * @s: string parameter
 */
void print_rev(char *s)
{
	strrev(s);
	printf("%s", s);
}
