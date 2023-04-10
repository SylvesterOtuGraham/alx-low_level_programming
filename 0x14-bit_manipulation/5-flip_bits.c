#include "main.h"
/**
 * flip_bits - change number.
 * @n: number
 * @m: other number
 *
 * Return: number of bits you would need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, result;
	unsigned int a, o;

	a = 0;
	result = 1;
	differnce = n ^ m;
	for (o = 0; o < (sizeof(unsigned long int) * 8); o++)
	{
		if (result == (differnce & result))
			a++;
		result <<= 1;
	}

	return (a);
}
