#include "monty.h"
/**
 * push_it - add data to stack
 * @head: head of stack
 * @line_n: line number
 * Return: nothing
 */

void push_it(stack_t **head, unsigned int line_n)
{
	int i, x = 0, y = 0;

	if (ela.name)
	{
		if (ela.name[0] == '-')
			x++;
		for ( ; ela.name[x] != '\0'; x++)
		{
			if (ela.name[x] > 57 || ela.name[x] < 48)
				x = 1;
		}
		if (x == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_n);
			fclose(ela.fl);
			free(ela.buff);
			free_it(*head);
			exit(EXIT_FAILURE);
		}
		i = atoi(ela.name);
		else
			add_nodeit(head, i);
	}
}
