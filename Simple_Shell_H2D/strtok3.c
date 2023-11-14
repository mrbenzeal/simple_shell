#include <stdio.h>
#include <string.h>

/**
 * In this code 'strtok2.c', we showed that the address of the string 'str'
 * is the same address on the IP.
 * By commenting out 'printf("%p\n %p\n", str, trunks)',
 * we also tried to show what will happen to the string 'str' on the IP, 
 * if we wish to print it out by introducing the 'for loop' condition & 
 * the string iteration 'i'.
 * Note that NULL = \0.
 */

int main(void)
{
	char str[] = "This is a separated word by spaces";
	char delim[5] = " ";
	char *trunks;
	int i;

	trunks = strtok(str, delim);
	/*printf("%p\n %p\n", str, trunks);*/

	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}

	for (i = 0; i < 35; i++)
	{
		if (str[i] == '\0')
			printf("\\0");
		else
			printf("%c", str[i]);
	}

	return (0);
}
