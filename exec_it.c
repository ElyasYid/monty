#include "monty.h"

/*
 * exec_it - executes the opcode given
 * @heap: head linked list of stack
 * @tally: line counter
 * @fle: monty file pointer
 * @subject: line subject
 * Return: 0 if success
 */

int exec_it(char *subject, stack_t **heap, unsigned int tally, FILE *fle)
{
	instruction_t opc[] = {
				{"push", push_it}, {"pall", pall_it},
				{"pint", pint_it}, {"pop", pop_it},
				{"swap", swap_it}, {"add", add_it},
				{"nop", do_nada}, {NULL, NULL}
				};
	unsigned int k = 0;
	char *opd;

	opd = strtok(subject, " \n\t");
	if (opd && opd[0] == '#')
		return (0);
	ela.name = strtok(NULL, " \n\t");
	while (opc[k].opcode && opd)
	{
		if (strcmp(opd, opc[k].opcode) == 0)
		{
			opc[k].f(heap, tally);
			return (0);
		}
		k++;
	}
	if (opd && opc[k].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", tally, opd);
		fclose(fle);
		free(subject);
		free_it(*heap);
		exit(EXIT_FAILURE);
	}
	return (1);
}
