#include <stdio.h>
#include <stdlib.h>
/**
 * main print the sum of 2 numbers.
 * @argc number of command line arguments.
 * @argv pointer to an array of command line arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc == 3)
	{
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n,x");
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0)
}
