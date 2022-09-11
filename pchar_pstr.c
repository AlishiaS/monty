#include "monty.h"

/**
 * pchar- prints the char at the top of the stack
 * @stack: pointer to head
 * @line_num: line number
 *
 * Return: None
 */
void pchar(stack_t **stack, unsigned int line_num)
{
	int alpha;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	alpha = *stack->n;

	if (alpha >= 0 && alpha <= 255)
	{
		putchar(alpha);
		putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
		exit(EXIT_FAILURE);
	}
}


/**
 * pstr- prints stack as a string
 * @stack: head of stack
 * @line_num: line number
 *
 */
void pstr(stack_t **stack, unsigned int line_num)
{
	int str;
	stack_t *top;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pstr, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	top == *stack;

	while (top)
	{
		str = top->n;
		if (str > 0 && str <= 127)
			putchar(str);
		else
			break;
		top = top->next;
	}

	purchar('\n');
}
