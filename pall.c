#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 *
 * @head: A pointer to the stack head.
 * @counter: Not used in this function.
 *
 * Return: This function does not return a value.
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
