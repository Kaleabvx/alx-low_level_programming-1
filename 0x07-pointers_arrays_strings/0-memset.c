#include "main.h"

/**
* _memset - files a memory block with a constant type
* @s: address
* @b: char to be used
* @n: no of types must be used
* Return: pointer to the memory
*/
char *memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
