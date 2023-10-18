#include "monty.h"
/**
 * monty_interpreter - Monty bytecode interpreter
 * @filename: Monty bytecode file name
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int monty_interpreter(char *filename)
{
	FILE *the_file;
	char *the_line = NULL;
	size_t len = 0;
	ssize_t to_read;
	unsigned int ln_nm = 0;
	stack_t *stack = NULL;
	instruction_t *insts = NULL;
	char *opcode;

	the_file = fopen(filename, "r");
	if (!the_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	while ((to_read = getline(&the_line, &len, the_file)) != -1)
	{
		ln_nm++;
		opcode = strtok(the_line, " \t\n");
		if (!opcode || *opcode == '#')
			continue;
		insts = tget_insts(opcode);
		if (!insts)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", ln_nm, opcode);
			free(the_line);
			fclose(the_file);
			free_stack(stack);
			return (EXIT_FAILURE);
		}
		insts->f(&stack, ln_nm);
	}

	free(the_line);
	fclose(the_file);
	free_stack(stack);
	return (EXIT_SUCCESS);
}
