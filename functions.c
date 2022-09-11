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


/**
 * pall - prints all the values on the stack, starting from the top of the stack
 * @stack: head
 * @line_num: line number
 *
 * Return: None
 */
void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *nw;
	(void)line_num;
	nw = *stack;

	while (nw)
	{
		printf("%d\n", nw->n);
		nw = nw->next;
	}
}


/**
 * pint - prints the value at the top of the stack
 * @stack: head of stack
 * line_num: line number
 *
 * Return: None
 */
void pint(stack_t **stack, unsigned int line_num)
{
	stack_t *nw;
	(void)line_num;
	if (*stack == NULL)
	{
		fprintf(stderr, "L&d: cant't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	nw = *stack;
	printf("%d\n", nw->n);
}


/**
 * pop - removes the top element of the stack
 * @head: pointer
 * @line_num: line number
 *
 * Return: None
 */
void pop(stack_t **head, unsigned int line_num)
{
	stack_t *top = NULL;

	if (!*head)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	top = *head;
	*head = (*head)->next;
	free(top);

	if (*head)
		*head->prev = NULL;
}
