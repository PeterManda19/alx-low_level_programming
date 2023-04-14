#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using the Jump
 *             search algorithm.
 *
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located, or NULL if value
 *         is not present in head or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, prev = 0;
    listint_t *curr;

    if (list == NULL)
        return (NULL);

    jump = sqrt(size);
    curr = list;

    while (curr->n < value && curr->next != NULL)
    {
        printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
        prev = curr->index;
        for (size_t i = 0; curr->next != NULL && i < jump; i++)
            curr = curr->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr->index);

    while (prev <= curr->index && curr->n >= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev, curr->n);
        if (curr->n == value)
            return (curr);
        prev++;
        curr = curr->prev;
    }

    return (NULL);
}
