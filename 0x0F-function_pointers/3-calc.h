#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int num1, int num2);
} op_t;

/* functions to choose from for 5 different operations */
int op_add(int num1, int num2);
int op_sub(int num1, int num2);
int op_mul(int num1, int num2);
int op_div(int num1, int num2);
int op_mod(int num1, int num2);

/* function to select correct operation function to perform */
int (*get_op_func(char *s))(int, int);

#endif
