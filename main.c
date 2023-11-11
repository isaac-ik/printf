#include "main.h"
int main(void)
{
	char *name;
	char *surname = "Ez";
	name = "Chee is a gir%c\n";
	_printf(name, 'l');
	_printf("My name is %s and surname is %s. Printing S1 as %s, character1 as %c\n", "CHEE", surname, "String 2", 'c');
	return (0);
}
