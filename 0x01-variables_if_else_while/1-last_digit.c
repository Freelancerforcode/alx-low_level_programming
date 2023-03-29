#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
=======
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
>>>>>>> 310fb7a0c526d798c5754f8f25679b5b95addcf6
 */
int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

=======
	/* your code goes there */
	num = n % 10;
	if (num > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, num);
	}
	else if (num == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, num);
	}
	else if (num < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	}
>>>>>>> 310fb7a0c526d798c5754f8f25679b5b95addcf6
	return (0);

}

