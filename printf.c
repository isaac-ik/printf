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
	char *str;
	int i;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						_putchar('(');
						_putchar(va_arg(args, int));
						_putchar(')');
						break;
					}
				case 's':
					str = va_arg(args, char *);
					i = 0;

					while (str[i] != '\0')
					{
						_putchar(str[i]);
						i++;
					}
			}
		}
		else
			_putchar(*format);
		format++;
	}
	va_end(args);
	return (0);
}
