#include "sort.h"

/**
 * insertion_sort_list - sort a list in acsending order
 * @list: the list to sort
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *ptr, *cur, *tmp;
int n;
cur = *list;
if (cur->next==NULL)
return;
cur = cur->next;
while(cur!=NULL)
{
n = 0;
ptr = cur;
tmp = cur->prev;
cur = cur->next;
while (tmp != NULL && tmp->n > ptr->n)
{
n++;
tmp = tmp->prev;
print_list(*list);
}
if (n)
{
ptr->prev->next = ptr->next;
if (ptr->next != NULL)
ptr->next->prev = ptr->prev;	
if (tmp == NULL)
{
tmp = *list;
ptr->prev=NULL;
ptr->next=tmp;
ptr->next->prev = ptr;
*list = ptr;
}
else
{
tmp = tmp->next;
tmp->prev->next = ptr;
ptr->prev = tmp->prev;
tmp->prev = ptr;
ptr->next = tmp;
print_list(*list);
}
}
}
}
