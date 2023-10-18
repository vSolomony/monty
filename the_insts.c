#include "monty.h"

/**
 * get_insts - Finds the corresponding instruction for an opcode
 * @op_code: The opcode
 * Return: A pointer to the instruction_t struct, or NULL if not found.
 */
instruction_t *get_insts(char *op_code)
{
	size_t i;

	instruction_t inst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}};

	for (i = 0; inst[i].opcode; i++)
	{
		if (strcmp(op_code, inst[i].opcode) == 0)
		{
			instruction_t *result = malloc(sizeof(instruction_t));

			if (result == NULL)
			{
				fprintf(stderr, "Error: malloc failed\n");
				exit(EXIT_FAILURE);
			}

			*result = inst[i];
			return (result);
		}
	}

	return (NULL);
}
