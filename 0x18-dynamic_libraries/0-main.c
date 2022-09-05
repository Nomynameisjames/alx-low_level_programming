#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	inc++;

	return (inc);
}
int main(void)
{
	printf("%d\n", _strlen("My Dyn Lib"));
	return (EXIT_SUCCESS);
}
