#include "monty.h"
/**
 * rotr - rotates the stack to the bottom
 * @stack: address of head pointer in stack
 * @ln_nm: Line number in Monty byte code file.
 */
void rotr(stack_t **stack, unsigned int ln_nm)
{
	(void)ln_nm;

	if (stack && *stack && (*stack)->next)
	{
		stack_t *last = *stack;
		stack_t *secondLast = NULL;

		while (last->next)
		{
			secondLast = last;
			last = last->next;
		}

		secondLast->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}
