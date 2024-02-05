#include <stdio.h>

/**
  * main -Entry point of the program.
  * Description: Prints the lowercase alphabet followed by a new line.
  * Return: Always returns 0 when succesfully executed.
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
