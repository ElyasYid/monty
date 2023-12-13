#include <main.h>

/**
 * pint_it - prints the top
 * @head: head of the stack
 * @counter: line number
 * Return: none
 */

void pint_it(stack_t **head, unsigned int cnt)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cnt);
		fclose(ela.file);
		free(ela.buff);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
