#include "sort.h"

/**
 * insertion_sort_list - sort a list in acsending order
 * @list: the list to sort
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *cur;
int n;
cur = *list;
if (!list)
return;
cur = *list;
while (cur)
{
while (cur)
{
if (cur->next)
{
if (cur->n > cur->next->n)
{
n = cur->n;
*(int *)&cur->n = cur->next->n;
*(int *)&cur->next->n = n;
cur = *list;
print_list(*list);
break;
}
}
cur = cur->next;
}
}
}
