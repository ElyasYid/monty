#include "monty.h"

/**
 * pint_it - prints the top
 * @head: head of the stack
 * @line_n: line number
 * Return: none
 */

void pint_it(stack_t **head, unsigned int line_n)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_n);
		fclose(ela.fl);
		free(ela.buff);
		free_it(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
