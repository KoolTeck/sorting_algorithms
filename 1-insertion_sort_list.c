#include "sort.h"

/**
 * insertion_sort_list - sort a list in acsending order
 * @list: the list to sort
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *sorted, *current, *next;

sorted = NULL;
current = *list;
while (current != NULL)
{
next = current->next;
current->prev = current->next = NULL;
sort_node(&sorted, current);
current = next;
}
*list = sorted;
print_list(*list);
}


/**
 * sort_node - swaps two nodes
 * @head: the ist node
 * @new_node: the second node
 *
 * Return: nothing
 */
void sort_node(listint_t **head, listint_t *new_node)
{
listint_t *current;
if (*head == NULL)
{
*head = new_node;
}
else if ((*head)->n >= new_node->n)
{
new_node->next = *head;
new_node->next->prev = new_node;
*head = new_node;
}
else
{
current = *head;
while (current->next && current->next->n < new_node->n)
{
current = current->next;
}
new_node->next = current->next;
if (current->next != NULL)
new_node->next->prev = new_node;
current->next = new_node;
new_node->prev = current;
}
}
