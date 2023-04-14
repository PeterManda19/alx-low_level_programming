#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where value is located or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *next;

    if (list == NULL)
        return (NULL);

    current = list;
    next = list->express;

    while (next && next->n < value)
    {
        printf("Value checked at index [%ld] = [%d]\n", next->index, next->n);
        current = next;
        next = next->express;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", current->index, next->index);

    while (current && current->index <= next->index)
    {
        printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        current = current->next;
    }

    return (NULL);
}
