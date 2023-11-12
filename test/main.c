#include "../main.h"
#include <stdio.h>
int main(void)
{
	char *name;
	/**int len;*/
	int len2, len1;
	char *surname = "Ez";
	len1 = _printf("Let's try to printf a %simple sentence.\n");
	len2 = printf("Let's try to printf a %simple sentence.\n");
	/*_printf("Length:[%d, %i]\n", len2, len2);*/
	printf("Length:[%d, %d]\n", len1, len2);
	name = "Chee is a gir%c\n";
	_printf(name, 'l');
	printf(name, 'l');
	_printf("My name is %s and surname is %s. Printing S1 as %s, character1 as %c\n", "CHEE", surname, "String 2", 'c');
	len1 = _printf("Unknown:[%r]\n");
	len2 = printf("Unknown:[%r]\n");
	printf("Length:[%d, %d]\n", len1, len2);
	_printf("my Length:[%d, %i]\n", len1, len2);
	printf("orginal Length:[%d, %i]\n", len1, len2);
	
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	return (0);
}
