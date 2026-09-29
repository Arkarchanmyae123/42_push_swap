#include "header.h"

void rotate(int *stack, int size)
{
    int temp;
    int i;

    if (!stack || size < 2)
    {
        return;
    }

    temp = stack[0];
    i = 0;

    while (i < size - 1)
    {
        stack[i] = stack[i + 1];
        i++;
    }
    stack[size - 1] = temp;
}


void ra(int *stack_a, int size_a)
{
    if (!stack_a || size_a < 2)
        return;
    rotate(stack_a, size_a);
    write(1, "ra\n", 3);
}

void rb(int *stack_b, int size_b)
{
    if (!stack_b || size_b < 2)
        return;
    rotate(stack_b, size_b);
    write(1, "rb\n", 3);
}

void rr(int *stack_a, int *stack_b, int size_a, int size_b)
{
    if (!stack_a || !stack_b)
        return;
    rotate(stack_a, size_a);
    rotate(stack_b, size_b);
    write(1, "rr\n", 3);
}