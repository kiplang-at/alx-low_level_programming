#include <stdio.h>
/**
  * main - entry point of the program
  * Description: Prints all single digit numbers of base 10 starting
  * from 0, followed by a new line
  * Return: Always returns  when successfully executed
  */
int main(void)
{
	int number;

	for  (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");

	return (0);
}
