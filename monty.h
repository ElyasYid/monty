#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct ela_man - a struct containing the info
 * @name: value
 * @file: pointer to monty file
 * @buff: container
 * Description: stores the values
 */

typedef struct ela_man
{
	char *name;
	FILE *fl;
	char *buff;
} elaa;

extern elaa ela;


/*functions*/

void add_it(stack_t **head, unsigned int line_n);
void do_nada(stack_t **head, unsigned int line_n);
void add_nodeit(stack_t **head, int n);
void free_it(stack_t *head);
void pall_it(stack_t **head);
void pint_it(stack_t **head, unsigned int cnt);
void pop_it(stack_t **head, unsigned int line_n);
void push_it(stack_t **head, unsigned int line_n);
void swap_it(stack_t **head, unsigned int line_n);
int exec_it(char *subject, stack_t **heap, unsigned int tally, FILE *fle);

#endif
