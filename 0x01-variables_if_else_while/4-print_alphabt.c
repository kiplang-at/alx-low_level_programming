#include <stdio.h>
/**
  * main - Entry of the program
  * Description: Prints the alphabet in lowercase, followed by a new line.
  * Return: Always returns 0 when successfully executed
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
