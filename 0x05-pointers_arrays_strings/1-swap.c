#include "main.h"
/**
 * swap_int  - takes reset its value to 98.
 * @a: first int.
 * @b: second int.
 * return: void.
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
