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
	stack_t *nw;

	if (*stack == NULL || *stack->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (*stack && *stack->next)
	{
		nw = top->next;
		nw->n += top->n;
		free(top);

		*stack = nw;
}


/**
 * sub - Subtracts top element of the stack from second top element
 * of the stack.
 * @stack: head of stack
 * @line_num: line number
 *
 * Return: None
 */
void sub(stack_t **stack, unsigned int line_num)
{
	stack_t *top;
	int x = 0;

	if (*stack == NULL || *stack->prev == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	top = *stack->prev;
	x = *stack->n - top->n;
	top->n = x;
	pop(stack, line_num);
}


/**
 * div - Divides the second top element by the top element of the stack
 * @stack: The head of the stack
 * @line_num: line number
 *
 * Return: None
 */
void div(stack_t **stack, unsigned int line_num)
{
	stack_t *top;
	int x = 0;

	if (*stack == NULL || *stack->prev == NULL)
	{
		fprinf(stderr, "L%u: can't div, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (*stack->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_num);
		exit(EXIT_FAILURE);
	}

	top = *stack->prev;
	x = top->n / *stack->n;
	top->n = x;
	pop(stack, line_num);
}


/**
 * mul - multiplies second top element of the stack with the top element 
 * of the stack.
 * @stack: head of the stack
 * @line_num: line number
 *
 * Return: None
 */
void mul(stack_t **stack, unsigned int line_num)
{
	stack_t *top;
	int x = 0;

	if (*stack == NULL || *stack->prev == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	top = *stack->prev;
	x = *stack->n * top->n;
	top->n = x;
	pop(stack, line_num);
}
