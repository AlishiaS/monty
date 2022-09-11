#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: head of stack
 * @line_num: line number
 *
 * Return: None
 */
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *top = *stack;
	unsigned int x 0, y= 0, len = 0;

	len = count_stack(*stack);

	if (len < 2)
		handle_error(ERR_ADD_USG, NULL, line_num, NULL);

	x = top->n;
	y = top->next->n;
	top->next->n = a + b;
	*stack = top->next;
	free(top);
}

