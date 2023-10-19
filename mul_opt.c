#include "monty.h"
/**
 * mul - multiplies the second top element of the stack with the top element
 * @stack: address of head pointer in stack
 * @ln_nm: Line number in Monty byte code file.
 */
void mul(stack_t **stack, unsigned int ln_nm)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;
	pop(stack, ln_nm);
}
