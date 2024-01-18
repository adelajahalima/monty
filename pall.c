/**
 * _pall - prints all values on the stack
 * @doubly: head of the linked list
 * @linum: line numbers
 * Return: no return
 */
void _pall(stack_t **doubly, unsigned int linum)
{
	stack_t *aux;
	(void)linum;

	aux = *doubly;

	while (aux)
	{
		printf("%d\n", aux->p);
		aux = aux->next;
	}
}
