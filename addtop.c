#include "monty.h"

/**
 * addtop - add to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: No
 */

void addtop(stack_t **head, int n)
{
	stack_t *brand_new, *temp;

	temp = *head;
	brand_new = malloc(sizeof(stack_t));
	if (brand_new == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	if (temp)
		temp->prev = brand_new;
	brand_new->n = n;
	brand_new->next = *head;
	brand_new->prev = NULL;
	*head = new_node;
}
