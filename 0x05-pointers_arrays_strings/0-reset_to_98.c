#include"main.h"
#include <stdio.h>
/**
 * main-prints out the reset value of int p
 * n- is a variable
 */

void reset_to_98(int *n);
int main(void)
{
	int p;

	p = 97;

	int *n;

	n = &p;

	*n = 98;

	return (0);
}
