#include "main.h"
/**
 * base_con - a function
 * Contributors: Isaac and Chee
 * Description: convert to base and prints to standard output
 * @num: number
 * @base: base
 * Return: count
 */
int base_con(int num, int base)
{
	int count;
	char *symbols = "0123456789abcdef";

	count = 0;
	/* if number is less than base */
	if (num < base)
	{
		/**
		 * use the num as an index to its value in the symbols array
		 * and write it to standard output
		 */
		_putchar(symbols[num]);
		count++;
	}
	if (num > base)
	{
		count = base_con(num / base, base);
		return (count + base_con(num % base, base));
	}
	return (count);
}
/**
 * base_con16 - a function
 * Contributors: Isaac and Chee
 * Description: convert to base and prints to standard output
 * @num: number
 * @t: whether lowercase or uppercase
 * Return: count
 */
int base_con16(int num, char t)
{
	int count;
	char *symbols = "0123456789abcdef";
	char s;

	count = 0;
	/* if number is less than base */
	if (num < 16)
	{
		/**
		 * use the num as an index to its value in the symbols array,
		 * and write it to standard output
		 */
		if (t == 'l' || (t == 'u' && num <= 9))
			s = symbols[num];
		if (t == 'u' && num > 9)
			s = symbols[num] - 32;
		_putchar(s);
		count++;
	}
	if (num > 16)
	{
		count = base_con16(num / 16, t);
		return (count + base_con16(num % 16, t));
	}
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
