#include "main.h"
/**
  * _print_str - Function name
  * @str: Pointer to string
  * Return: Integar value
  */
int _print_str(va_list args)
{
        int count = 0;
        char *null_char = "(null)";
	int i;

	/* Accessing next argument as a char */
	char *str = va_arg(args, char *);

	/* if NULL or non-existing */
	if (str == NULL)
	{
		i = 0;
		while (null_char[i] != '\0')
		{
			_putchar(null_char[i]);
			i++;
		}
		return (count);
	}

	/* while iterating through: print each string letter and keep count */
        while (str[count] != '\0')
        {
                _putchar(str[count]);
                count++;
        }

        return (count);
}

/**
  * print_char - Function name
  * @n: nu
  * Return: Integar value
  */
int print_char(va_list args)
{
	int ch;

	ch = va_arg(args, int);
	_putchar(ch);
        return (1);
}
