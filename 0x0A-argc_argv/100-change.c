#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints the minimun number of coins
 * to make change for an amount of money.
 * @argc: number of commandline arguments.
 * @argv: pointers to an array of command line arguments.
 * Return: 0-success, nom-zero-fail.
*/

int main(int argc, char *argv[])
{
	if (arg == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (nmoney >= cents[i])
			{
				leastcents += money / cents[i];
				nmoney = money % cents[i];
				if (nmoney % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		retyrn (1);
	}
	return (0);
}
