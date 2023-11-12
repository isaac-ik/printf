#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _print_str(char *str);

/* Prints integer */
int print_int(int number);

/* PRINTS STRING */
int _print_str(char *str);

/* PRINTS CHAR */
int print_char(int n);

/* MISC */
char *intTostr(int number, char *numberStr, int len);
int lengthOfnum(int n);

struct print_map
{
	/* the conversion specifier */
	char spec;
	/* pointer t function that will print for this specific specifier */
	int (*funct)();
};
#endif
