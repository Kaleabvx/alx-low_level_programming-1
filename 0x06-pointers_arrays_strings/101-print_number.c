#include "main.h"

/**
* print_number - It prints an Integer
* @n: Integer must to be Printed
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
