#include "main.h"
#include <stdarg.h>
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
	int i;

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
					i = 0;

					while (str[i] != '\0')
					{
						_putchar(str[i]);
						count++;
						i++;
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
