#include "sort.h"
/**
 * insertion_sort_list - sort function
 * @list: Dobule linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur;

	if (list == NULL || (*list)->next == NULL)
		return;
	cur = (*list)->next;
	while (cur)
	{
		while ((cur->prev) && (cur->prev->n > cur->n))
		{
			cur = swaping(cur, list);
			print_list(*list);
		}
		cur = cur->next;
	}
}
/**
 *swaping- swap
 *@node: node
 *@list: node list
 *Return: pointer
 */
listint_t *swaping(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
