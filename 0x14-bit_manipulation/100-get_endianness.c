#include "main.h"

/**
* get_endianness - a function that checks the endianness
* Return: 0 if big, 1 if little
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *n = (char *) &i;

	return (*n);
}
