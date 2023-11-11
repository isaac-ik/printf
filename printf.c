#include "main.h"
/**
  * _printf - Function name
  * @format: Pointer to string
  * Return: Integar value
  */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;
	int chr = 0;
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
					chr = va_arg(args, int);
					if (chr)
					{
						_putchar(chr); /**_putchar(va_arg(args, int));*/
						count++;
						break;
					}
					return (-1);
				case 's':
					str = va_arg(args, char *);
					i = 0;
					while (str[i] != '\0')
					{
						_putchar(str[i]);
						count++;
						i++;
					}
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
