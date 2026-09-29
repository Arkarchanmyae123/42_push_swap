#include "header.h"


void pa(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
    int i = *size_a;
    int j = 0;

    if (*size_b == 0)
    {
        return;
    }

    while (i > 0)
    {
        stack_a[i] = stack_a[i - 1];
        i--;
    }
    stack_a[0] = stack_b[0];

    while (j < *size_b - 1)
    {
        stack_b[j] = stack_b[j + 1];
        j++;
    }

    *size_a = *size_a + 1;
    *size_b = *size_b - 1;

    write(1, "pa\n", 3);

}



void pb(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
    int i = *size_b;
    int j = 0;

    if (*size_a == 0)
    {
        return;
    }

    while (i > 0)
    {
        stack_b[i] = stack_b[i - 1];
        i--;
    }
    stack_b[0] = stack_a[0];

    while (j < *size_a - 1 )
    {
        stack_a[j] = stack_a[ j + 1];
        j++;
    }

    *size_a = *size_a - 1;
    *size_b = *size_b + 1;

    write(1, "pb\n", 3);
}