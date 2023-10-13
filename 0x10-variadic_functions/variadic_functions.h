#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


/**
 *	data_s - struct that contain data
 *	@c: character.
 *	@func: function pointer.
*/

typedef struct data_s
{
	char c;
	void(*func)(va_list);
}	data_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
