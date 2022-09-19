#include "main.h"

/**
* rev_strings - reverse the string.
* @s : pointer to string
*
* Return : void.
*/

void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	K = 0;
	J = I - 1;

	while (K < J)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
