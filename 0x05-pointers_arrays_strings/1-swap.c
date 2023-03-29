#include <stdio.h>
/**
 * void - swap_int(int *a, int *b);
 * @a : Point integer to be swaped with a
 * @b : Point integer to be swaped with b
 * Retrun: (void)
 */
void swap_int(int *a, int *b);
{
	int c = *a;
	*b = *a;
	*b = c;
}
