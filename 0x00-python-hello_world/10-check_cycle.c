#include "lists.h"

/**
 * check_cycle - function that checks the cycle process
 * @listint_t: linkesd list variable
 *
 * return: 0 if there is no cycle and 1 if otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (!list || !list->next)
		return (0);
	fast = list;
	slow =list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
