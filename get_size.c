#include "main.h"

/**
 * get_size - Calculate the size to cast the argument
 * joint team between akpovwovwo and uchechukwu
 * perfectly done
 * @format: Formatted strings in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *v)
{
	int curr_i = *v + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*v = curr_i - 1;
	else
		*v = curr_i;

	return (size);
}
