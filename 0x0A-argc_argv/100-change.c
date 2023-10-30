#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (cents > 0)
	{
	if (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	else if (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	else if (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	else if (cents >= 1)
	{
		cents -= 1;
		coins++;
	}
	}
	printf("%d\n", coins);
	return (0);
}
