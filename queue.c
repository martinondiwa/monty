#include "monty.h"

/**
 * f_queue - Sets the mode to queue.
 * @head: Pointer to the stack head.
 * @counter: Line number.
 *
 * Return: No return.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack.
 * @head: Pointer to the head of the stack.
 * @n: New value to be added.
 *
 * Return: No return.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return; /* Exit the function if allocation fails */
	}

	new_node->n = n;
	new_node->next = NULL;
	aux = *head;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new_node;
		new_node->prev = aux;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
}

