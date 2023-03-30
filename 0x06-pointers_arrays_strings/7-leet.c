#include "main.h"
/**
 * leet - string
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char *result = s;
	char *leetspeak[] = {"4", "3", "0", "7", "1"};
	char small[] = {'a', 'e', 'o', 't', 'l'};
	char capital[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == small[j] || s[i] == capital[j])
			{
				result[i] = *leetspeak[j];
			}
		}
	}
	return (result);
}
