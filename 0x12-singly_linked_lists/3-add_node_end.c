#include "lists.h"

/**
 * add_node_end - Add new node at end of list.
 * @head: Address of first node of list.
 * @str: Address of string to insert into new node.
 * Return: Address of new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp1;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp1 = *head;
	while (temp1->next)
		temp1 = temp1->next;
	temp1->next = temp;
	return (temp);
}
