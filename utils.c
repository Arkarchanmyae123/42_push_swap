#include "header.h"

int has_duplicates(int *stack, int size)
{
    int i = 0;
    int j;

    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (stack[i] == stack[j])
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int is_sorted(int *stack, int size)
{
    int i = 0;

    while (i < size - 1)
    {
        if (stack[i] > stack[i + 1])
            return (0);
        i++;
    }
    return (1);
}

void sort_stack(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
    if (*size_a == 2)
        sa(stack_a, *size_a);
    else if (*size_a == 3)
        sort_3(stack_a, *size_a);
    else if (*size_a <= 5)
        sort_5(stack_a, stack_b, size_a, size_b);
    else
        radix_sort(stack_a, stack_b, size_a, size_b);
}