#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
  * _printf - Function name
  * @format: Pointer to string
  * Return: Integar value
  */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);
	count = formatParser(format, args);
	va_end(args);
	return (count);
}
