#include "monty.h"

/**
 * pall_it - prints stack
 * @head: pointer to pointer to stack
 * Return: none
 */

void pall_it(stack_t **head, unsigned int line_n)
{
	stack_t *temp;

	(void)line_n;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
