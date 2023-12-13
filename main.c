#include "monty.h"

elaa ela = {NULL, NULL, NULL, 0}

/**
 * main - entry point for mcode interpreter
 * @argc: number of args
 * @argv: array containing file location
 * Return: 0 for success
 */

int main( int argc, char char**argv)
{
	size_t size = 0;
	ssize_t buffer = 1;
	stack_t *heap = NULL;
	unsigned int tally = 0;
	char *subject;
	FILE *fle;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE):
	}

	fle= fopen(argv[1], "r");
	bus.fl = fle;
	if (!fle)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (buffer > 0)
	{
		subject = NULL;
		buffer = getline(&subject, &size, fle);
		bus.buff = subject;
		tally++;
		if (buffer > 0)
		{
			exec_it(subject, &heap, tally, fle);
		}
		free(subject);
	}
	free_it(heap);
	fclose(fle);
	return (0);
}
