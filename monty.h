#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Functions*/
void add(stack_t **stack, unsigned int ln_nm);
void swap(stack_t **stack, unsigned int ln_nm);
void pop(stack_t **stack, unsigned int ln_nm);
void nop(stack_t **stack, unsigned int ln_nm);
void push(stack_t **stack, unsigned int ln_nm);
void pall(stack_t **stack, unsigned int ln_nm);
void pint(stack_t **stack, unsigned int ln_nm);
void free_stack(stack_t *stack);
instruction_t *get_insts(char *op_code);
int monty_interpreter(char *filename);
void mod(stack_t **stack, unsigned int ln_nm);
void mul(stack_t **stack, unsigned int ln_nm);
void sub(stack_t **stack, unsigned int ln_nm);
void _div(stack_t **stack, unsigned int ln_nm);
void pchar(stack_t **stack, unsigned int ln_nm);
void pstr(stack_t **stack, unsigned int ln_nm);
void rotl(stack_t **stack, unsigned int ln_nm);
void rotr(stack_t **stack, unsigned int ln_nm);

#endif
