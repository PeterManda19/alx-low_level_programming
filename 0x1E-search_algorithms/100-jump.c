#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 if value is not present
 *         in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size), prev = 0, i;

    if (array == NULL)
        return (-1);

    while (array[min(step, size) - 1] < value)
    {
        prev = step;
        step += sqrt(size);

        if (prev >= size)
            return (-1);

        printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
    }

    for (i = prev; i < min(step, size); i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}

/**
 * min - Returns the minimum of two numbers
 *
 * @a: First number
 * @b: Second number
 *
 * Return: The minimum of a and b
 */
size_t min(size_t a, size_t b)
{
    return (a < b ? a : b);
}
