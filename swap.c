
#include "header.h"


int swap_array(int *arr, int size)
{
    int tmp;

    if (size < 2)
    {
        return (-1);
    }

    
    tmp = arr[0];
    arr[0] = arr[1];
    arr[1] = tmp;

    return (1);
}



void sa(int *stack_a, int size_a)
{
    if (swap_array(stack_a, size_a) == 1)
    {
        write(1, "sa\n", 3);
    }  
}



void sb(int *stack_b, int size_b)
{
    if (swap_array(stack_b, size_b) == 1)
    {
        write(1, "sb\n", 3);
    }
}



void ss(int *stack_a, int *stack_b, int size_a, int size_b)
{
    if (size_a >= 2 && size_b >= 2)
    {
        swap_array(stack_a,size_a);
        swap_array(stack_b, size_b);
        write(1, "ss\n", 3);
    }

}

