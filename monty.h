#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - variables (args, file, line content)
 * @arg: value
 * @file: pointer to monty file
 * @lincon: line content
 * @lefe: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *lincon;
	int lefe;
}  bus_t;
extern bus_t bus;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *lincon);
void push_to_stack(stack_t **head, unsigned int number);
void pall(stack_t **head, unsigned int number);
void pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void pop_the_stack(stack_t **head, unsigned int countr);
void swap_content(stack_t **head, unsigned int countr);
void add(stack_t **head, unsigned int countr);
void nop(stack_t **head, unsigned int countr);
void sub(stack_t **head, unsigned int countr);
void div(stack_t **head, unsigned int countr);
void mul(stack_t **head, unsigned int countr);
void mod(stack_t **head, unsigned int countr);
void pchar(stack_t **head, unsigned int countr);
void pstr(stack_t **head, unsigned int countr);
void rotl(stack_t **head, unsigned int countr);
void rotr(stack_t **head, __attribute__((unused)) unsigned int countr);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void queue(stack_t **head, unsigned int countr);
void stack(stack_t **head, unsigned int countr);
#endif
