#include "monty.h"

/**
 * main - entry point for mcode interpreter
 * @argc: number of args
 * @argv: array containing file location
 * Return: 0 for success
 */

elaa ela = {NULL, NULL, NULL};

int main(int argc, char **argv)
{
	char buffer[256];
	stack_t *heap = NULL;
	unsigned int tally = 0;
	char *subject;
	FILE *fle;
	
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fle= fopen(argv[1], "r");
	ela.fl = fle;
	if (!fle)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(buffer, sizeof(buffer), fle) != NULL)
	{
		subject = fgets(buffer, sizeof(buffer), fle);
		ela.buff = subject;
		tally++;
		exec_it(subject, &heap, tally, fle);
		free(subject);
	}
	free_it(heap);
	fclose(fle);
	return (0);
}
