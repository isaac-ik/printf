#include "main.h"

/**
 * print_pointer - a function
 * Contributors: Isaac and Chee
 * Description: convert a decimal to upper HEXADECIMAL
 * @args: argument list
 * Return: count
 */
int print_pointer(va_list args)
{
	int count = 2;
	unsigned int address;

	address = va_arg(args, unsigned int);
	_print_s("0x");
	count += base_con16(address, LOWER);
	return (count);
}
