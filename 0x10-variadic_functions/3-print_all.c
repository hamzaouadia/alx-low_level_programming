#include "variadic_functions.h"

/**
 *	print_c - function that prints character.
 *	@args: string.
 *	Return: void.
*/

void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 *	print_i - function that prints intiger.
 *	@args: string.
 *	Return: void.
*/

void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 *	print_f - function that prints float.
 *	@args: string.
 *	Return: void.
*/

void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 *	print_s - function that prints string.
 *	@args: string.
 *	Return: void.
*/

void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 *	print_all - function that prints all.
 *	@format: string.
 *	Return: void.
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j = 0;
	char *sep = "";
	data_t print_format[] = {
								{'c', print_c},
								{'i', print_i},
								{'f', print_f},
								{'s', print_s},
								{'\0', NULL} };

	va_start(args, format);
	while (format && format[j])
	{
		i = 0;
		while (print_format[i].c)
		{
			if (print_format[i].c == format[j])
			{
				printf("%s", sep);
				print_format[i].func(args);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
