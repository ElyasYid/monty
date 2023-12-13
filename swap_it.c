#include "monty.h"

/**
 * swap_it - swaps the top two elements.
 * @head: stack head
 * @line_n: line_number
 * Return: no return
*/

void swap_it(stack_t **head, unsigned int line_n)
{
	stack_t *temp;
	int x = 0, swapped;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		x++;
	}
	if (x < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_n);
		fclose(ela.fl);
		free(ela.buff);
		free_it(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	swapped = temp->n;
	temp->n = temp->next->n;
	temp->next->n = swapped;
}
