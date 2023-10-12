#include "3-calc.h"

/**
 *	main - function that find operation function.
 *	@ac: integer.
 *	@av: array of strings.
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
	op = get_op_func(av[2]);
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

	r = op(i, j);
	printf("%d\n", r);
	return (0);
}
