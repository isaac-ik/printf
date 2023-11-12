#include "main.h"

/**
  * _print_str - Function name
  * @str: Pointer to string
  * Return: Integar value
  */

int _print_str(char *str)
{
	int count = 0;
	char null_char[] = "(null)";

	if (str == NULL)
	{
		count += _print_str(null_char);
		return (count);
	}

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}
