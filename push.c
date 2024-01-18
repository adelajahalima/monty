#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @doubly: linked list head
 * @linum: line numbers
 * Return: no return
 */

void _push(stack_t **doubly, unsigned int linum)
{
	int p, w;

	if (!vglo.arg)
	{
		dprintf(2, "L%u: ", linum);
		dprintf(2, "usage: push integer\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}

	for (w = 0; vglo.arg[w] != '\0'; w++)
	{
		if (!isdigit(vglo.arg[w]) && vglo.arg[w] != '-')
		{
			dprintf(2, "L%u: ", linum);
			dprintf(2, "usage: push integer\n");
			free_vglo();
			exit(EXIT_FAILURE);
		}
	}

	p = atoi(vglo.arg);

	if (vglo.lifo == 1)
		add_dnodeint(doubly, p);
	else
		add_dnodeint_end(doubly, p);
}
