#include <stdio.h>

/**
  * main - Entry point of the program
  * Description: Print the aphabet in lovercase, and then in
  * uppercase, follwed by a new line
  * Return: Always returns 0 on successfull execution of the program
  */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);
}
