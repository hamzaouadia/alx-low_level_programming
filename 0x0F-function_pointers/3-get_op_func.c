#include "3-calc.h"

/**
 *	get_op_func - function that find operation function.
 *	@s: string.
 *	Return: function pointer.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
					{"+", op_add},
					{"-", op_sub},
					{"*", op_mul},
					{"/", op_div},
					{"%", op_mod},
					{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == op[i].op[0] && s && !s[1])
			return (op[i].f);
		i++;
	}
	return (NULL);
	}
