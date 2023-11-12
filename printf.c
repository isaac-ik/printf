#include "main.h"
#include <stdlib.h>

/**
  * _printf - Function name
  * @format: Pointer to string
  * Return: Integar value
  */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;
	
	struct print_map conv_array[] =
	{
		{'c', print_char},
		{'s', _print_str},
		{'d', print_int},
		{'i', print_int},
		{0, NULL}
	};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			/* Looping through the conv_array to find matching specificier */
			for (i = 0; conv_array[i].spec != 0; i++)
			{
				/* if a matching specifier is found */
				if (conv_array[i].spec == *format)
				{
					/* Call the associated function */
					count += conv_array[i].funct(args);
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
