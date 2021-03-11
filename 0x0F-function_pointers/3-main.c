#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - get_op_func operators
 * func sings and fubcs op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input o, operator, input t = pointer res to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int o, t, a;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	o = atoi(argv[1]);
	t = atoi(argv[3]);
	get_op = argv[2];

	/* argv[2] was longer than 1 char */
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	a = res(o, t);

	printf("%d\n", a);
	return (0);
}
