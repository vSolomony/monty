#include "monty.h"
/**
 * pchar - prints the char at the top of the stack
 * @stack: address of head pointer in stack
 * @ln_nm: Line number in Monty byte code file.
 */
void pchar(stack_t **stack, unsigned int ln_nm)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	putchar((*stack)->n);
	putchar('\n');
}
