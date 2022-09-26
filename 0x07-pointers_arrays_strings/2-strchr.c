#include "main.h"
/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched within a code.
 * @c:  In the code The character to be located.
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
