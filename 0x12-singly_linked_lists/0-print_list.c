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
	size_t list = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil\n)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		list++;
	}
i
	return (list);
}
