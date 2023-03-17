#include <stdio.h>

/**
 * main - entry point
 * program prints numbers base 10
 * Return: 0 always wins
 */

int main(void)
{
        int i;

        for (i = '0'; i <= '9'; i++)
                printf("%c", i);
        printf("\n");
        return (0);
}
