#include "main.h"
#include <stdio.h>
int main(void)
{
	char *name;
	/**int len;*/
	int len2;
	char *surname = "Ez";
	/**len = _printf("Let's try to printf a simple sentence.\n");*/
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len2, len2);
	name = "Chee is a gir%c\n";
	_printf(name, 'l');
	printf(name, 'l');
	_printf("My name is %s and surname is %s. Printing S1 as %s, character1 as %c\n", "CHEE", surname, "String 2", 'c');
	return (0);
}
