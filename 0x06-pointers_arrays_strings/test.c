#include <stdio.h>
char *_strcat(char *dest, char *src) {
	char *result = dest;
        while (*dest != '\0') { // Find the end of the destination string
		     
			printf("%c\n", *dest);
			printf("%p\n", dest);
			dest++;
			    }
	while (*src != '\0') { // Copy the source string to the end of the destination string
	           *dest = *src;
	            dest++;
	            src++;
	 }
	 *dest = '\0'; // Terminate the resulting string with a null character
	return result;
}
int main(void)
{
      	char s1[98] = "Hello ";
	char s2[] = "World!\n";
      	char *ptr;
	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
