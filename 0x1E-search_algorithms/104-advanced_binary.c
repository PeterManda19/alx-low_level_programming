#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted integer array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        /* Print subarray being searched */
        printf("Searching in array: ");
        for (mid = left; mid < right; mid++)
            printf("%d, ", array[mid]);
        printf("%d\n", array[mid]);

        mid = (left + right) / 2;

        if (array[mid] == value)
        {
            /* Check if value is the first occurrence */
            if (mid == 0 || array[mid - 1] != value)
                return (mid);
            right = mid - 1; /* Search left side for first occurrence */
        }
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
