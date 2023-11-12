#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

/* MACROS */
#define INT int;
#define STRING char*;


int _printf(const char *format, ...);
int _putchar(char c);

/* Prints integer */
int print_int(va_list args);

/* PRINTS STRING */
int _print_str(va_list args);

/* PRINTS CHAR */
int print_char(va_list args);

/* MISC */
char *intTostr(int number, char *numberStr, int len);
int lengthOfnum(int n);
int _print_s(char *str);
int formatParser(const char *format, va_list args);

struct print_map
{
	/* the conversion specifier */
	char spec;
	/* pointer t function that will print for this specific specifier */
	int (*funct)(va_list);
};

#endif
