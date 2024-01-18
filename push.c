#include "monty.h"
/**
 * push_to_stack - add node to the stack
 * @head: stack head
 * @countr: line_number
 * Return: no return
*/
void push_to_stack(stack_t **head, unsigned int countr)
{
	int n, w = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			w++;
		for (; bus.arg[w] != '\0'; w++)
		{
			if (bus.arg[w] > 57 || bus.arg[w] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", countr);
			fclose(bus.file);
			free(bus.lincon);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", countr);
		fclose(bus.file);
		free(bus.lincon);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lefe == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
