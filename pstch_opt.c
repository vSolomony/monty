#include "monty.h"
/**
 * pstr - prints the string starting at the top of the stack
 * @stack: address of head pointer in stack
 * @ln_nm: Line number in Monty byte code file.
 */
void pstr(stack_t **stack, unsigned int ln_nm)
{
	stack_t *current = *stack;

	(void)ln_nm;

	while (current && current->n != 0 && (current->n >= 0 && current->n <= 127))
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
