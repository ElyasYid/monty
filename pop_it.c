#include "monty.h"

/**
 * pop_it - removes the top
 * @head: stack head
 * @cnt: line_number
 * Return: no return
*/

void pop_it(stack_t **head, unsigned int cnt)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cnt);
		fclose(ela.file);
		free(ela.buff);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
