#include "main.h"
#include <stdlib.h>
/**
  * print_int - Function name
  * @args: Argument list
  * Return: Integar value
  */
int print_int(va_list args)
{
	int count = 0;/* Keep track of count */
	char *str;
	int number;

	/* Accessing the next item as an int */
	number = va_arg(args, int);

	/*process individual digit*/
	count = lengthOfnum(number);
	str = malloc(sizeof(char) * (count + 1));
	str = intTostr(number, str, count);
	_print_s(str);
	free(str);
	return (count);
}
/**
  * print_int2 - Function name
  * @args: Argument list
  * Return: Integar value
  */
int print_int2(va_list args)
{
	int count = 0;/* Keep track of count */
	int number;

	/* Accessing the next item as an int */
	number = va_arg(args, int);
	count = base_con(number, DEC);
	return (count);
}
/**
  * print_unsignedInt - Function name
  * @args: Argument list
  * Return: Integar value
  */
int print_unsignedInt(va_list args)
{
	int count = 0;/* Keep track of count */
	int number;

	/* Accessing the next item as an int */
	number = va_arg(args, unsigned int);
	count = base_con(number, DEC);
	return (count);
}
/**
  * intTostr - Function name
  * @number: Integer Value
  * @numberStr: Pointer to string
  * @len: length of str
  * Return: Character value
  */
char *intTostr(int number, char *numberStr, int len)
{
	int digit, isNegative = 0;
	int i = len - 1;

	if (number < 0)
	{
		number = -number;
		numberStr[0] = '-';
		isNegative = 1;
	}
	/*Loop till number = zero or the string index is negative*/
	while (number != 0 || (!isNegative && i >= 0))
	{
		digit = (number % 10) + '0';
		number = number / 10;
		numberStr[i] = digit;
		i--;
	}
	numberStr[len] = '\0';
	return (numberStr);
}
/**
  * lengthOfnum - Function name
  * @n: Integer Value
  * Return: Integar value
  */
int lengthOfnum(int n)
{
	int count = 0;

	/* Account for size of negative values and zero */
	if (n <= 0)
		count = 1;

	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
