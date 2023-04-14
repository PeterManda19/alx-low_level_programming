#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 if value is not present
 *         in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        print_array(array, left, right);

        if (array[mid] == value)
            return (mid);
        else if (array[mid] > value)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: Pointer to the first element of the array
 * @start: Index of the first element to print
 * @end: Index of the last element to print
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i != end)
            printf(", ");
    }

    printf("\n");
}
