#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header goes here */
/**
 * main - Entry point
 * Return: Always 0(success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
printf(" %d is positive \n", n);
}
else if (lastDigit == 0)
{
printf(" %d is zero \n", n);
}
else
{
printf(" %d is negative \n", n);
}
return (0);
}
