#include "lists.h"

/**
 * pop_listint - it deletes the head node of
 * a linked list
 * @head: it is the head of a list.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *currD;

	if (*head == NULL)
		return (0);

	currD = *head;

	hnode = currD->n;

	h = currD->next;

	free(currD);

	*head = h;

	return (hnode);
}
