#include<stdio.h>
#include"main.h"
/*
 * unsigned int binary_to_uint(const char *b) - converts binary to integer
 * int main (void)- calls the function
 */
unsigned int binary_to_uint(const char *b);
int main(void)
{
const char *binary = "1011";

unsigned int n;

n = binary_to_uint(binary);
printf("%u\n", n);
}

unsigned int binary_to_uint(const char *b)
{int weight = 1;

unsigned int decimal = 0;

while   (*b != '\0')
{
if (*b != '0' && *b != '1')
{
printf("not a binary input");
return (0);
}
int bit = *b - '0';

decimal = decimal * 2 + bit;

*b++;
}
	return (decimal);
}
