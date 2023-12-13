#include "monty.h"
/**
 * push_it - add data to stack
 * @head: head of stack
 * @counter: line number
 * Return: nothing
 */

void push_it(stack_t **head, unsigned int cnt)
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
			fprintf(stderr, "L%d: usage: push integer\n", cnt);
			fclose(ela.fl);
			free(ela.buff);
			exit(EXIT_FAILURE);
		}
		i = atoi(ela.name);
		else
			addtop(head, i);
	}
