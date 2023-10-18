#include "monty.h"

/**
 * f_rotl - Rotates the stack to bring the top element to the bottom.
 *
 * @head: A pointer to the stack head.
 * @counter: The current line number.
 *
 * Return: This funct does not return a value.
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
