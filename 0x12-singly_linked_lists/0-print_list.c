#include <lists.h>

/**
 * size_t - function that prints all the elements of a list_t list.
 * @h: pointers to items in the list
 *
 * Return number of nodes
 */
size_t print_list(const list_t *h)
{
	Node *current_node = head;
	int count = 0;

	while (current_node != NULL)
	{
		count++;
		_putchar(current_node->data);
		_putchar('\n');
		current_node = current_node->next;
	}
	return (count);
}
