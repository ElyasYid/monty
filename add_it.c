#include "monty.h"

/**
 * add_it - adds the top two elements of the stack.
 * @head: stack head
 * @line_n: line_number
 * Return: no return
*/

void add_it(stack_t **head, unsigned int line_n)
{
	stack_t *temp;
	int x = 0;
	int add;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		x++;
	}
	if (x < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_n);
		fclose(ela.fl);
		free(ela.buffer);
		free_it(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	add = temp->n + temp->next->n;
	temp->next->n = add;
	*head = temp->next;
	free(add);
}
