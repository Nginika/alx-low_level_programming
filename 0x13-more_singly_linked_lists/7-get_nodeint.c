#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node in the list
 * @head: pointer to head
 * @index: the nth node
 * Return: the nth node, null if not existing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
