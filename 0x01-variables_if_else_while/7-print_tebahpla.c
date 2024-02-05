#include <stdio.h>

/**
  * main - Entry point of the program.
  * Description: Prints the lowercase alphabet in reverse,
  * followed by a new line
  * Return: Always returns 0 when successfully executed.
  */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
