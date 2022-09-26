#include "main.h"
/**
 * *_memcpy -  it  copies the memory area from src to dest.
 * @dest: destination is the key
 * @src: its source
 * @n: max bytes to use n
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
