#include <lists.h>
#include <stdio.h>

/**
 * size_t - function that prints all the elements of a list_t list.
 * @h: pointers to items in the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
i
	return (nodes);
}
