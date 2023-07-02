#include "main.h"

void print_buffer(char buffer[], int *buff_indictor);

/**
 * _printf - printf function
 * @format: format.
 * Description: written by isaac-ik
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, printd = 0, printd_char = 0;
	int flags, width, precision, size, buff_indictor = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_indictor++] = format[i];
			if (buff_indictor == BUFF_SIZE)
				print_buffer(buffer, &buff_indictor);
			/* write(1, &format[i], 1);*/
			printd_char++;
		}
		else
		{
			print_buffer(buffer, &buff_indictor);

			width = get_width(format, &i, list);
			flags = get_flags(format, &i);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printd = handle_print(format, &i, list, buffer, flags, width, precision, size);
			if (printd == -1)
            {
                return (-1);
            }

			printd_char += printd;
		}
	}

	print_buffer(buffer, &buff_indictor);

	va_end(list);

	return (printd_char);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_indictor: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_indictor)
{
	if (*buff_indictor > 0)
    {
        write(1, &buffer[0], *buff_indictor);
    }

	*buff_indictor = 0;
}
