#include "lists.h"
/**
 * list_len - returning number of linked list
 * @h: linked list pinter
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
