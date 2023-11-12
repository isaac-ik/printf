#include "main.h"
#include <stdio.h>
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
	str = (char *)malloc(sizeof(char) * (count + 1));
	str = intTostr(number, str, count);
	_print_s(str);
	free(str);
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
	int i, digit;
	/*char *pstr = numberStr;*/

	for (i = len; i >= 0; i--)
	{
		while (number != 0)
		{
			i--;
			digit = (number % 10) + '0';
			number = number / 10;
			numberStr[i] = digit;
		}
		numberStr[len] = '\0';
	}
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

	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
/**
  * _print_s - Function name
  * @str: Pointer to string
  * Return: Integar value
  */
int _print_s(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}
