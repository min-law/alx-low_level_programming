#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string to check
* @c: character to check for
*
* Return: pointer to spot in s with c or null
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + 1) == c)
			return (s + 1);
	}
	if (*(s + 1) == c)
		return (s + 1);
	return (0);
}
