#include "monty.h"
/**
 * _div - divides the second top element of the stack by the top element
 * @stack: address of head pointer in stack
 * @ln_nm: Line number in Monty byte code file.
 */
void _div(stack_t **stack, unsigned int ln_nm)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n /= (*stack)->n;
	pop(stack, ln_nm);
}
