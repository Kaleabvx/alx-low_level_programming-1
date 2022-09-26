#include "main.h"
/**
* _strchr - string character.
* @s: string given
* @c: another char to give in code.
* Return: string
*/
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
