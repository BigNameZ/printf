#include "main.h"

/**
 * is_printable - Evaluates if a char is printable
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 * @c: Char to be evaluated.
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is a digit
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Casts a number to the specified size
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 * its a joint project between akpovwovwo and uchechukwu
 * perfectly done
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
