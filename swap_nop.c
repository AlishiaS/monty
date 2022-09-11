#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: head of stack
 * @line_number: line number
 *
 * Return: None
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t nw;

	nw = *stack;

	if (nw = NULL || nw->next == NULL && nw->prev == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	nw->prev = nw->next;
	nw-next->prev = NULL;
	nw->next = nw->next->next;
	nw->prev->next = nw;
	*stack = nw->prev;
}


/**
 * _nop - doesn't do anything
 * @stack: head
 * @line_num: line number
 *
 * Return: no return.
 */
void nop(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
}
