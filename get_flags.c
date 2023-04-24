#include "main.h"

/**
 * get_flags - Calculates active flags
 * joint team between akpovwovwo and uchechukwu
 * perfectly done
 * @format: Formatted strings in which to print the arguments
 * @i: take a parameters
 * Return: Flags:
 */
int get_flags(const char *format, int *v)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *v + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*v = curr_i - 1;

	return (flags);
}
