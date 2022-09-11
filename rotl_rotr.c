#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: head
 * @line_num: line number
 *
 * Return: None
 */
void rotl(stack_t **stack, unsigned int line_num)
{
	stack_t *one, *two;

	if (!*stack || !*stack->next)
		return;

	one = *stack;
	two = *stack->next;
	*stack = two;
	two->prev = NULL;

	while (two->next)
	{
		two = two->next;
	}

	one->next = two;
	one->next = NULL;
	one->prev = two;
}


/**
 * rotr- rotates the stack to the bottom
 * @stack: head of stack
 * @line_num: line number
 *
 * Return: None
 */
void rotr(stack_t **stack, unsigned int line_num)
{
	stack_t *one, *two;

	if (!*stack || !*stack->next)
		return;

	one = *stack;

	while (one->next->next)
	{
		one = one->next;
	}

	two = one->next;
	one->next = NULL;
	*stack->prev = two;
	two->next = *stack;
	two->prev = NULL;
	*stack = two;
}
