#include "monty.h"

/**
 * freeit - frees a doubly linked list
 * @head: head of the stack
 * Return: nada
 */

void free_it(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
