#include <stdio.h>
#include <string.h>

/**
 * since we know that the last part is NULL in our 'strtok.c' file
 * in this file 'strtok1.c', the info can be use to iterate & give it a loop
 * instead of repeating it; this will help, in the case we have a file that
 * contains a lot of words & we need to delimit or passing the string token
 * function it.
 */

int main(void)
{
	char str[] = "This is a separated word by spaces";
	char delim[5] = " ";
	char *trunks;

	trunks = strtok(str, delim);
	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}

	return (0);
}
