#include <stdio.h>

/**
  * main - Entry point of the program.
  * Description: Prints all single digit numbers of base 10 starting from 0.
  * Return: Always returns 0 when successfully executed.
  */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
