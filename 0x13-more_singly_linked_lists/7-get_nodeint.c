#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth of nodes
 * @head: head
 * @index: index
 * Return: number
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
