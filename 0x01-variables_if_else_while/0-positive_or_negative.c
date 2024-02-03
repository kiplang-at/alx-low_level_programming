#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - entry point
  * Description: Assigns a random number to variable n and prints whether the
  * mumber is positive, zero or negative.
  * Return: Always return 0 when successfully executed
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);

	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}