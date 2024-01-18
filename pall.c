#include "monty.h"
/**
 * pall - prints the stack
 * @head: stack head
 * @countr: no used
 * Return: no return
*/
void pall(stack_t **head, unsigned int countr)
{
	stack_t *h;
	(void)countr;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
