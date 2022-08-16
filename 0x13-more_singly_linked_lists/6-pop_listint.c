#include "lists.h"
/**
 * pop_listint - function that deletes a head node and returns data
 * @head: head
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	listint_t *curr;
	int data;

	if (*head == NULL)
		return (0);
	curr = *head;
	data = curr->n;
	h = curr->next;
	free(curr);
	*head = h;
	return (data);
}
