#include "monty.h"

/**
 * f_queue - Prints the top element (front) of the queue.
 *
 * @head: A pointer to the queue head.
 * @counter: The current line number.
 *
 * Return: This funct does not return a value.
 */

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack.
 *
 * @n: The new value to be added.
 * @head: A pointer to the head of the stack.
 *
 * Return: This funct does not return a value.
 */

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
