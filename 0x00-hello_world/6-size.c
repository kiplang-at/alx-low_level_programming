#include <stdio.h>
/**
  * main - Entry point of the program
  * Description: This program prints the sizes of various types on the
  * computer compiled and run on
  * Return: 0 on successful execution
  */
int main(void)
{
	size_t charSize = sizeof(char);
	size_t intSize = sizeof(int);
	size_t longintSize = sizeof(long int);
	size_t longlongSize = sizeof(long long);
	size_t floatSize = sizeof(float);

	printf("Size of char: %zu byte(s)\n", charSize);
	printf("Size of int: %zu byte(s)\n", intSize);
	printf("Size of long int: %zu byte(s)\n", longintSize);
	printf("Size of long long int: %zu byte(s)\n", longlongSize);
	printf("Size of float: %zu byte(s)\n", floatSize);
	return (0);
}
