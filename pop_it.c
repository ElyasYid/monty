#include "monty.h"

/**
 * pop_it - removes the top
 * @head: stack head
 * @line_n: line_number
 * Return: no return
*/

void pop_it(stack_t **head, unsigned int line_n)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_n);
		fclose(ela.file);
		free(ela.buff);
		free_it(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
