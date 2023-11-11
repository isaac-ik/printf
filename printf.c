#include "main.h"
/**
  * _printf - Function name
  * @format: Pointer to string
  * Return: Integar value
  */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					count += _print_str(str);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					count++;
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
