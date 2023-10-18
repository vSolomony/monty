#include "monty.h"
/**
 * to_add - to add top two elements in the stack
 * @stack: address of head pointer in stack
 * @ln_nm: Line number in Monty byte code file.
 */
void to_add(stack_t **stack, unsigned int ln_nm)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	to_pop(stack, ln_nm);
}
