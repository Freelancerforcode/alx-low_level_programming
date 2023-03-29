#include <stdio.h>
/**
 * void swap_int(int *a, int *b);
 * @a : Point integer to be swaped with a
 * @b : Point integer to be swaped with b
 * Retrun: 0
 */
void swap_int(int *a, int *b);
{
       	int a = 98
	int b = 42 
	swap_int(&a,&b);
	int c =*a;
	*b = *a;
	*b = c;

	return (0)
}
