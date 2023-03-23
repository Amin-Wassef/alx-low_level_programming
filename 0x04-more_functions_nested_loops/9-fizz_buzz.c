#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *	num multiples of 3 print Fizz
 *	num multiples of 5 print Buzz
 *	num multiples of 3 and 5 print FizzBuzz
 *	each num and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0)
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0)
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			print("\n");
	}
	return (0);
}
