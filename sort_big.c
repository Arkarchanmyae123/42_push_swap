#include "header.h"

// Simplifies the stack so Radix can handle negative numbers easily
void index_stack(int *stack_a, int size_a)
{
    int i;
    int j;
    int rank;
    int *temp;

    temp = (int *)malloc(sizeof(int) * size_a);
    if (!temp)
        return;
    i = -1; // Start at -1 to save lines in the while loop
    while (++i < size_a)
    {
        rank = 0;
        j = -1;
        while (++j < size_a)
            if (stack_a[j] < stack_a[i])
                rank++;
        temp[i] = rank;
    }
    i = -1;
    while (++i < size_a)
        stack_a[i] = temp[i];
    free(temp);
}

int get_max_bits(int size)
{
    int max = size - 1;
    int bits = 0;

    while ((max >> bits) != 0)
        bits++;
    return (bits);
}
// int main()
// {
//     int a = 6;
//     int b = get_max_bits(a);
//     printf("%d\n", b);
// }

void radix_sort(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
    int i = 0;
    int j;
    int max_bits = get_max_bits(*size_a);
    int original_size = *size_a;

    index_stack(stack_a, *size_a);
    
    while (i < max_bits)
    {
        j = 0;
        while (j < original_size)
        {
            if (((stack_a[0] >> i) & 1) == 1)
                ra(stack_a, *size_a);
            else
                pb(stack_a, stack_b, size_a, size_b);
            j++;
        }
        while (*size_b > 0)
            pa(stack_a, stack_b, size_a, size_b);
        i++;
    }
}