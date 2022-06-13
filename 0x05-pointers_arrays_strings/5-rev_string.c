#include "main.h"

/**
 * rev_string - reverses string
 * @s: parameter
 */
void rev_string(char *s)
{
	int i, adava, onimisi;
	char first, last;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	adava = i - 1;
	onimisi = adava / 2;
	while (adava >= 0)
	{
		first = s[adava - onimisi};
		last = s[onimisi];
		s[onimisi] = first;
		s[adava - onimisi] = last;
		onimisi--;
	}
}
