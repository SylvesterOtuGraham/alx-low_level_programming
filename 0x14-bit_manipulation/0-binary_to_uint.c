#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int j;

if (!n)
return (0);

for (j = 0; n[j]; j++)
{
if (n[j] < '0' || n[j] > '1')
return (0);

num = 2 * num + (n[j] - '0');
}

return (num);
}

