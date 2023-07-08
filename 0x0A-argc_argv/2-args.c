#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argumrnt vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);

	return (0);
}
