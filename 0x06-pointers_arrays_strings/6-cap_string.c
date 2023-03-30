#include "main.h"
/**
 * cap_string - capitalize char
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i;
	int cap;

	i = 0;
	cap = 1;
	while (s[i] != '\0')
	{
		if (cap && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= ('a' - 'A');
		}
		cap = (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '.');
		i++;
	}
	return (s);
}
