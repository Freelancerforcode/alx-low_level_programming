#include <stdio.h>
<<<<<<< HEAD

/**
 * main - prints all possible combinations of single-digit numbers
=======
/**
 * main - Entry point
 *
>>>>>>> 310fb7a0c526d798c5754f8f25679b5b95addcf6
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

=======
int k;

for (k = 48; k <= 57; k++)
{
putchar(k);
if (k < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
>>>>>>> 310fb7a0c526d798c5754f8f25679b5b95addcf6
