#include "lists.h"

/**
 * list_len - Calculates the length of a linked list
 * @h: Pointer to the head of the linked list
 * Return: The total amount of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
