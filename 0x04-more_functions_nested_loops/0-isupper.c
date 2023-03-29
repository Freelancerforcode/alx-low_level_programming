#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
=======
/**
 * _isupper - Checks for uppercase character
 *@c: The character to be checked
 * Return: 1 (True - uppercase) OR 0 (False - lowecase)
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
>>>>>>> 310fb7a0c526d798c5754f8f25679b5b95addcf6
}
