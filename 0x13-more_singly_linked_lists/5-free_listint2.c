#include "lists.h"

/**
 * free_listint2 - frees listint_t and sets head to null
 * @head: pointer to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
