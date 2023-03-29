#include <stdio.h>
/**
 *swap_int - swap two integers
 * @a : Point integer to be swaped with a
 * @b : Point integer to be swaped with b
 * Retrun: void
 */
void swap_int(int *a, int *b);
{
	int c = *a;
	*a = *b;
	*b = c;
}
