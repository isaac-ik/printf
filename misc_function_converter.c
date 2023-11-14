#include "main.h"

/**
 * base_con16_shrt - a function
 * Contributors: Isaac and Chee
 * Description: convert to base and prints to standard output
 * @num: number
 * @t: whether lowercase or uppercase
 * Return: count
 */
int base_con16_shrt(int num, char t)
{
	char *symbols = "0123456789abcdef";
	int rem, count, offset = 0;

	if (num == 0)
		return (0);

	/* Step 1: Get the remainder when we divide by 16 */
	rem = num % 16;

	/* Step 2: Recursively divide the number by 16 */
	count = 1 + base_con16_shrt(num / 16, t);

	if (rem > 9 && t == 'u')
	{
		offset = 32;
	}
	/* Step 3: Print the character after each successive call */
	_putchar(symbols[rem] - offset);

	return (count);
}

/**
 * base_con_shrt - a function
 * Contributors: Isaac and Chee
 * Description: convert to base and prints to standard output
 * @num: number
 * @base: base
 * Return: count
 */
int base_con_shrt(int num, int base)
{
	int rem, count;

	if (num == 0)
		return (0);

	/* Step 1: Get the remainder when we divide by the base */
	rem = num % base;

	/* Step 2: Recursively divide the number by the base */
	count = 1 + base_con_shrt(num / base, base);

	/* Step 3: Print the character after each successive call */
	_putchar(rem + '0');

	return (count);
}

