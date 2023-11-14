#include "main.h"
/**
 * base_con16_S - a function
 * Contributors: Isaac and Chee
 * Description: convert to base and prints to standard output
 * @str: String at the index to covert to hex
 * Return: count
 */
int base_con16_S(char *str)
{       
        int count;
	int array[2];
        char *symbols = "0123456789abcef";
        char s;

	array[0] = 0;
        
        count = 0;
        /* if number is less than base */
        if (num < 16)
        {       
                /**
                 * use the num as an index to its value in the symbols array,
                 * and write it to standard output
                 */
                if (num <= 9))
                        s = symbols[num];
                if (num > 9) 
                        s = symbols[num] - 32;
                _putchar(s);
                count++;
        }
        if (num > 16)
        {       
                count = base_con16_S(num / 16, t); 
                return (count + base_con16(num % 16, t));
        }
        return (count);
}


/**
  * _print_S - Function name
  * @str: Pointer to string
  * Return: Integar value
  */
int _print_S(char *str)
{
        int count = 0;

        while (str[count] != '\0')
        {
                if ((str[count] > 31) && (str[count] < 127))
                {
                        _putchar(str[count]);
                        count++;
                }

                else
                {
                        _putchar("\\");
                        _putchar("x");
                }
        }

        return (count);
}
