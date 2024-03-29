#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
