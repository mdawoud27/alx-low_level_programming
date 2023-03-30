#include "main.h"
/**
 * string_toupper - change all lower to upper
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 32)
			s[i] = 32;
		else if ((s[i] <= 90 && s[i] >= 65) || s[i] < 65)
			s[i] = s[i];
		else
			s[i] -= 32;
		i++;
	}
	return (s);
}
