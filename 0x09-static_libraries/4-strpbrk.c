#include "main.h"
/**
* _strpbrk - Find first commun char in s
* @s: first string
* @accept: string to compare with
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
