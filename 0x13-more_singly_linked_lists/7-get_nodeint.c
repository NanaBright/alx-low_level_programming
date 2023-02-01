#include "lists.h"

/**
 * get_nodeint_at_index - return the node at nth index
 * @head: head of the linkedlist
 * @index: index of node to be return
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	while (head != NULL)
	{
		if (ind == index)
			return (head);
		ind++;
		head = head->next;
	}

	return (NULL);
}
