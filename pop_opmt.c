#include "monty.h"
/**
 * pop - Pop the top element in the stack
 * @stack: address of head pointer in stack
 * @ln_nm: line number
 */
void pop(stack_t **stack, unsigned int ln_nm)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
