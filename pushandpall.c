#include "monty.h"


/**
 * push_to_stack - Adds a node to the stack.
 * @new_nodeptr: Pointer to the new node.
 * @linum: Interger representing the line number of the opcode.
 */

void push_to_stack(stack_t **new_nodeptr, __attribute__((unused))unsigned int linum)
{
	stack_t *tmp;

	if (new_nodeptr == NULL || *new_nodeptr == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_nodeptr;
		return;
	}
	tmp = head;
	head = *new_nodeptr;
	head->next = tmp;
	tmp->prev = head;
}


/**
 * pall - Prints all values from stack starting from top.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @linum: line number of  the opcode.
 */
void pall(stack_t **stack, unsigned int linum)
{
	stack_t *tmp;

	(void) linum;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

