#include "main.h"
/**
  * formatParser - Function name
  * @format: Pointer to string
  * @args: List of arguments
  * Return: Integar value
  */
int formatParser(const char *format, va_list args)
{
	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += parseConversion(format, args);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}

/**
  * parseConversion - Function name
  * @format: Pointer to string
  * @args: List of arguments
  * Return: Integar value
  */

int parseConversion(const char *format, va_list args)
{
	int i, count = 0;

	print_map_t conv_array[] = {
		{'c', print_char},
		{'s', _print_str},
		{'d', print_int},
		{'i', print_int},
		{'b', print_decTobin},
		{0, NULL}
	};

	/*Loop through conv_array to find matching specificier */
	for (i = 0; i < 6; i++)
	{
		/* if a matching specifier is found */
		if (conv_array[i].spec == *format)
		{
			count += conv_array[i].funct(args); /* Call the associated function */
			break;
		}
		if (i == 5)
		{
			if (*format == '%')
			{
				_putchar(*format);
				count++;
			}
			else
			{
				_putchar(*(format - 1));
				count++;
				_putchar(*format);
				count++;
			}
		}
	}

	return (count);
}
