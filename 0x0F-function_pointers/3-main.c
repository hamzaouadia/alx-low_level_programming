#include "3-calc.h"

/**
 *	get_op_func - function that find operation function.
 *	@s: string.
 *	Return: function pointer.
*/

int main(int ac, char **av)
{
	int i, j, r;
	int (*op)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(av[1]);
	j = atoi(av[3]);
	op = get_op_function(av[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	if (!j && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	r = op(a, b);
	printf("%d\n", r);
	return (0);
}
