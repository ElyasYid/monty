#include <monty.h>

/**
 * pall_it - prints stack
 * @head: pointer to pointer to stack
 * Return: none
 */

void pall_it(stack_t **head)
{
	stack_t *tem;

	tem = *head;
	if (tem == NULL)
		return;
	while (tem)
	{
		printf("%d\n", tem->n)
		tem = tem->next;
	}
}
