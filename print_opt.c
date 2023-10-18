#include "monty.h"
/**
 * the_pint - prints value of the top
 * @stack: head pointer address of stack
 * @ln_nm: the line number
 */
void the_pint(stack_t **stack, unsigned int ln_nm)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

