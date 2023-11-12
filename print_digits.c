#include "main.h"
/**
  * print_int - Function name
  * @number: Pointer to string
  * Return: Integar value
  */
int print_int(int number)
{
	int count = 0;/* Keep track of count */
	char *str;
	
	/*process individual digit*/
	count = lengthOfnum(number);
	str = (char *)malloc(sizeof(char) * (count + 1));
	str = intTostr(number, str, count);
	_print_str(str);
	return (count);
	
}
/**
  * intTostr - Function name
  * @str: Pointer to string
  * @numberStr: kl
  * @len: length of str
  * Return: Integar value
  */
char *intTostr(int number, char *numberStr, int len)
{
	int i, digit;
	/*char *pstr = numberStr;*/

	for (i = len; i >= 0; i--)
	{
		while (number != 0)
		{
			digit = (number % 10) + '0';
			number = number / 10;
			numberStr[i] = digit;
			i--;
		}
		numberStr[len] = '\0';
	}
	return (numberStr);
}
/**
  * lengthOfnum - Function name
  * @n: Pointer to string
  * Return: Integar value
  */
int lengthOfnum(int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
	    /* digit = (n % 10) + '0'; */
	    n = n / 10;
	    count++;
	}
	return (count);

}
