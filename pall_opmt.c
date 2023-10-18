#include "monty.h"
/**
 * pall - to print all the values of the stack
 * @stack: adress pointer of the head stack
 * @ln_nm: Line number in Monty byte code file.
 */
void pall(stack_t **stack, unsigned int ln_nm)
{
	stack_t *current = *stack;

	(void)ln_nm;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
