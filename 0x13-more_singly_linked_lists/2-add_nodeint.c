#include "lists.h"
/**
 * add_nodeint -  function that adds a new node at the beginning of a list
 * @n: number
 * @head: head
 * Return: a pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
