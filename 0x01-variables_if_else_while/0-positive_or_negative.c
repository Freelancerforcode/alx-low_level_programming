#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
=======
/**
 * main - Entry point
>>>>>>> 310fb7a0c526d798c5754f8f25679b5b95addcf6
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
=======
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
>>>>>>> 310fb7a0c526d798c5754f8f25679b5b95addcf6

