#include <main.h>
/**
 * main - int _strlen(char *s);
 * function:  that returns the length of a string.
 * Return: 0
 */
	int _strlen(char *s)
{
	int len = 0, i = 0;
	while (s[i] != '\0')
{
	len += 1;
	i++;
}
	return (len);
}
