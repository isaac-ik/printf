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
 * print_bin2 - a function
 * Contributors: Isaac and Chee
 * Description: convert a decimal to binary
 * @args: argument list
 * Return: count
 */
int print_bin2(va_list args)
{
	int count;
	unsigned int numb;

	numb = va_arg(args, unsigned int);
	count = base_con_shrt(numb, BIN);
	return (count);
}
/**
 * print_oct - a function
 * Contributors: Isaac and Chee
 * Description: convert a decimal to octal
 * @args: argument list
 * Return: count
 */
int print_oct(va_list args)
{
	int count;
	unsigned int numb;

	numb = va_arg(args, unsigned int);
	count = base_con_shrt(numb, OCT);
	return (count);
}
/**
 * print_hex - a function
 * Contributors: Isaac and Chee
 * Description: convert a decimal to lowercase Hexadecimal
 * @args: argument list
 * Return: count
 */
int print_hex(va_list args)
{
	int count;
	unsigned int numb;

	numb = va_arg(args, unsigned int);
	count = base_con16_shrt(numb, LOWER);
	return (count);
}
/**
 * print_HEX - a function
 * Contributors: Isaac and Chee
 * Description: convert a decimal to upper HEXADECIMAL
 * @args: argument list
 * Return: count
 */
int print_HEX(va_list args)
{
	int count;
	unsigned int numb;

	numb = va_arg(args, unsigned int);
	count = base_con16_shrt(numb, UPPER);
	return (count);
}
