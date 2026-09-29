#include "header.h"

void reverse_rotate(int *stack, int size)
{
    int temp;
    int i;

    if (!stack || size < 2)
    {
        return;
    }
    temp = stack[size - 1];
    i = size - 1;
    while (i > 0)
    {
        stack[i] = stack[i - 1];
        i--;
    }
    stack[0] = temp;


}

void rra(int *stack_a, int size_a)
{
    if (!stack_a || size_a < 2)
        return;
    reverse_rotate(stack_a, size_a);
    write(1, "rra\n", 4);
}

void rrb(int *stack_b, int size_b)
{
    if (!stack_b || size_b < 2)
        return;
    reverse_rotate(stack_b, size_b);
    write(1, "rrb\n", 4);
}

void rrr(int *stack_a, int *stack_b, int size_a, int size_b)
{
    if (!stack_a || !stack_b)
    {
        return;
    }
    reverse_rotate(stack_a, size_a);
    reverse_rotate(stack_b, size_b);
    write(1, "rrr\n", 4);
}