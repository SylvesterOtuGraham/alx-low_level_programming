#include "main.h"
/**
 * strlen - return the length of a string
 * @s: char to check
 * this will return the length of a string
 * Return: 0 if successful
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
	a++;
	return (a);
}
