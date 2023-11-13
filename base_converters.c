#include "main.h"
#include <stdio.h>

/**
 * decTobin - a function
 * Contributors: Isaac and Chee
 * Description: convert a decimal to binary
 * @args: argument list
 * Return: count
 */
int print_decTobin(va_list args)
{
	int power, binNum, count, Tpower;
	unsigned int number;
	int remainder;
	char *binStr;

	binNum = 0;
	number = va_arg(args, unsigned int);
	power = indextoStart(number, 2) - 1;
	Tpower = power;
	count = 0;
	/* the conversion */
	while (number != 0)
	{
		remainder = number %  2;
		binNum += remainder * expo(10, (Tpower - power));
		number = number / 2;
		power--;
		count++;
	}
	/* allocate memory for it */
	binStr = malloc(sizeof(char) * (count + 1));
	if (binStr == NULL)
		return (0);
	/* convert to a string */
	binStr = intTostr(binNum, binStr, count);
	/*print the binary string */
	_print_s(binStr);
	return (count);
}
/**
 * indextoStart - a function
 * Contributors: Isaac and Chee
 * Description: get the number of divisions to use later
 * @number: the dcimal number
 * @base: the base
 * Return: count
 */
int indextoStart(unsigned int number, int base)
{
	int count = 0;

	while (number != 0)
	{
		number  = number / base;
		count++;
	}
	return (count);
}
/**
 * exp - a function
 * Contributors: Isaac and Chee
 * Description: claculates the ppower of a num
 * @num: the dcimal number
 * @power: the power
 * Return: result
 */
int expo(int num, int power)
{
	if (power < 0)
		return (-1);
	if (power == 0)
	       return (1);
	if (power == 1)
		return (num);
	
	return (num * expo(num, (power - 1)));
}
