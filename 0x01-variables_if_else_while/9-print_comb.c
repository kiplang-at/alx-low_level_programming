#include <stdio.h>

/**
  * main - Entry point of the program
  * Description: Prints all possible combinations of single-digit numbers.
  * Return: Always returns 0 when sucessfully executed
  */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');

		if (digit < 9)
		{
			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
		return (0);
}
