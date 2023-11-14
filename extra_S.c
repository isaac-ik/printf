#include "main.h"

/**
  * handle_custom_S - Function name
  * Contributors: Isaac and Chee
  * @args: varaidic list
  * Return: Integar value
  */
int handle_custom_S(va_list args)
{
	int count = 0;
	char *null_char = "(null)";

	/* Accessing next argument as a char */
	char *str = va_arg(args, char *);

	/* if NULL or non-existing */
	if (str == NULL)
	{
		count += _print_s(null_char);
		return (count);
	}

	/* while iterating through: print each string letter and keep count */
	count = _print_custom_s(str);
	return (count);
}

/**
  * base_conv_16 - Function name
  * @num: Integer Value
  * @acc: Integer Value of Accumulated function call
  * Return: Integar value
  */
int base_conv_16(int num, int acc)
{
	char *symbols = "0123456789ABCDEF";
	int rem, count;

	if (num == 0)
	{
		if (acc == 1)
		{
			_putchar('0');
			return (1);
		}
		return (0);
	}

	/* Step 1: Get the remainder when we divide by 16 */
	rem = num % 16;

	/* Step 2: Recursively divide the number by 16 */
	count = 1 + base_conv_16(num / 16, acc + 1);

	/* Step 3: Print the character after each successive call */
	_putchar(symbols[rem]);

	return (count);
}


/**
  * _print_custom_s - Function name
  * @str: Pointer to string
  * Return: Integar value
  */
int _print_custom_s(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if ((str[count] > 31) && (str[count] < 127))
		{
			_putchar(str[count]);
			count++;
		}
		else
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += base_conv_16((int) str[count], 0);
		}
	}

	return (count);
}
