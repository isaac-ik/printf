#include "main.h"
/**
 * print_bin - a function
 * Contributors: Isaac and Chee
 * Description: convert a decimal to binary
 * @args: argument list
 * Return: count
 */
int print_bin(va_list args)
{
	unsigned int n, m, i, sum, bitRep[32];
	int count;
	/* Extract the unsigned integer argument from the va_list */
	n = va_arg(args, unsigned int);
	/* Set bitSize to the most significant bit (2^31 for a 32-bit integer) */
	m = 2147483648;
	/**
	 * the binary representation of 5 is 00000000000000000000000000000101
	 * When printing the binary representation,
	 * it's common to skip leading zeros
	 * to make the output more concise and readable
	 * Task: Calculate the binary representation of the number
	 * and store it in array a
	 */
	bitRep[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		bitRep[i] = (n / m) % 2;
	}
	/* Print the binary representation, skipping leading zeros */
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += bitRep[i];
		/**
		 * if sum is zero, it indicates that the
		 * current digit is a leading zero and can be skipped
		 */
		if (sum != 0 || i == 31)
		{
			char z = '0' + bitRep[i];
			/* Write the character to standard output */
			_putchar(z);
			count++;
		}
	}
	/* Return the number of characters written */
	return (count);
}
/**
 * print_decTobin - a function
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
 * expo - a function
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
