#include "header.h"

int get_min_index(int *stack, int size)
{
    int i = 0;
    int min_val = stack[0];
    int min_idx = 0;

    while (i < size)
    {
        if (stack[i] < min_val)
        {
            min_val = stack[i];
            min_idx = i;
        }
        i++;
    }
    return (min_idx);
}

void sort_3(int *stack_a, int size_a)
{
    if (size_a != 3)
        return;
    
    if (stack_a[0] > stack_a[1] && stack_a[0] < stack_a[2] && stack_a[1] < stack_a[2])
        sa(stack_a, size_a);
    else if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2] && stack_a[1] > stack_a[2])
    {
        sa(stack_a, size_a);
        rra(stack_a, size_a);
    }
    else if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2] && stack_a[1] < stack_a[2])
        ra(stack_a, size_a);
    else if (stack_a[0] < stack_a[1] && stack_a[0] < stack_a[2] && stack_a[1] > stack_a[2])
    {
        sa(stack_a, size_a);
        ra(stack_a, size_a);
    }
    else if (stack_a[0] < stack_a[1] && stack_a[0] > stack_a[2] && stack_a[1] > stack_a[2])
        rra(stack_a, size_a);
}

void sort_5(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
    while (*size_a > 3)
    {
        int min_idx = get_min_index(stack_a, *size_a);
        
        // Rotate the minimum element to the top efficiently
        if (min_idx <= *size_a / 2)
        {
            while (min_idx-- > 0)
                ra(stack_a, *size_a);
        }
        else
        {
            int r_count = *size_a - min_idx;
            while (r_count-- > 0)
                rra(stack_a, *size_a);
        }
        pb(stack_a, stack_b, size_a, size_b);
    }
    sort_3(stack_a, *size_a);
    pa(stack_a, stack_b, size_a, size_b);
    pa(stack_a, stack_b, size_a, size_b);
}