#include "monty.h"
/**
 * swap - swap top two elements in the stack
 * @stack: address of head pointer of stack
 * @ln_nm: Line number
 */
void swap(stack_t **stack, unsigned int ln_nm)
{
	int temp;

	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
