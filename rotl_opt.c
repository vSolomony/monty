#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @stack: address of head pointer in stack
 * @ln_nm: Line number in Monty byte code file.
 */
void rotl(stack_t **stack, unsigned int ln_nm)
{
	(void)ln_nm;

	if (stack && *stack && (*stack)->next)
	{
		stack_t *last = *stack;

		while (last->next)
			last = last->next;

		last->next = *stack;
		*stack = (*stack)->next;
		last->next->next = NULL;
	}
}
