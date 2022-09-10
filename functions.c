#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: head
 * @line_num: line number
 *
 * Return: None
 */
void push(stack_t **stack, unsigned int line_num)
{
	stack_t *nw;

	nw = malloc(sizeof(stack_t));

	if (nw == NULL)
	{
		fprinf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	nw->n = line_num;
	nw->prev = NULL;
	nw->next = *stack;
	
	if (*stack != NULL)
	{
		*stack->prev = nw;
	}

	*stack = new;
}

