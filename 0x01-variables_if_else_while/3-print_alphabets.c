#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 always success
 */

int main(void)
{
	char c;

	for (c = 'a'; ; c++)
	{
		if (c == 'z')
		{
			printf("z");
			c = 'A';
		}
		printf("%c", c);
		if (c == 'Z')
		{
			break;
		}
	}
	printf("\n");
	return (0);
}
