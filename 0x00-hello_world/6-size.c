#include <stdio.h>
/**
  * main - Entry point of the program
  * Desscription: This program prints the sizes of various types on the
  * computer compiled and run on
  * Return: 0 on successful execution
  */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long: %zu byt(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
