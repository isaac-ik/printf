#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

#define OCT 8
#define DEC 10
#define UPPER 'u'
#define LOWER 'l'

int _printf(const char *format, ...);
int _putchar(char c);

/* Prints integer */
int print_int(va_list args);
int print_int2(va_list args);
int print_unsignedInt(va_list args);

/* PRINTS STRING */
int _print_str(va_list args);
int handle_custom_S(va_list args);

/* PRINTS CHAR */
int print_char(va_list args);

/* MISC */
char *intTostr(int number, char *numberStr, int len);
int lengthOfnum(int n);
int _print_s(char *str);
int formatParser(const char *format, va_list args);
int parseConversion(const char *format, va_list args);
int expo(int num, int power);
int base_con(int num, int base);
int base_con16(int num, char t);
int _print_custom_s(char *str);
int base_conv_16(int num, int acc);

/* BASE CONVERTERS */
int print_bin(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int indextoStart(unsigned int number, int base);

/**
 * struct print_map - a structure
 * @spec: converter specifier
 * @funct: function pointer
 */
typedef struct print_map
{
	/* the conversion specifier */
	char spec;
	/* pointer t function that will print for this specific specifier */
	int (*funct)(va_list);
} print_map_t;

#endif
