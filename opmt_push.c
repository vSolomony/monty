#include "monty.h"
/**
 * the_push - to push element
 * @stack: pointer address of head stack
 * @ln_nm: the line number
 */
void the_push(stack_t **stack, unsigned int ln_nm)
{
	char *the_arg;
	int the_value;

	stack_t *new_node = malloc(sizeof(stack_t));

	if (!stack)
	{
		fprintf(stderr, "Error: No stack initialized\n");
		exit(EXIT_FAILURE);
	}

	the_arg = strtok(NULL, " \t\n");
	if (!the_arg || (!isdigit(*the_arg) && (*the_arg != '-')))
	{
		fprintf(stderr, "L%u: usage: push integer\n", ln_nm);
		exit(EXIT_FAILURE);
	}

	the_value = atoi(the_arg);

	if (!new_node)
	{
		fprintf(stderr, "Error: Faild to Malloc\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = the_value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

