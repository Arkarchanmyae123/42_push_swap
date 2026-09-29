#ifndef Header_H
#define Header_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>














//help_fun
int has_duplicates(int *stack, int size);
int is_sorted(int *stack, int size);
void sort_stack(int *stack_a, int *stack_b, int *size_a, int *size_b);
void sort_3(int *stack_a, int size_a);
void sort_5(int *stack_a, int *stack_b, int *size_a, int *size_b);
void radix_sort(int *stack_a, int *stack_b, int *size_a, int *size_b);
void index_stack(int *stack_a, int size_a);
//swap_only
int swap_array(int *arr, int size);
void sa(int *stack_a, int size_a);
void sb(int *stack_b, int size_b);
void ss(int *stack_a, int *stack_b, int size_a, int size_b);

//push_only
void pa(int *stack_a, int *stack_b, int *size_a, int *size_b);
void pb(int *stack_a, int *stack_b, int *size_a, int *size_b);


//rotate
void rotate(int *stack, int size);
void ra(int *stack_a, int size_a);
void rb(int *stack_b, int size_b);
void rr(int *stack_a, int *stack_b, int size_a, int size_b);

//reverse rotate
void reverse_rotate(int *stack, int size);
void rra(int *stack_a, int size_a);
void rrb(int *stack_b, int size_b);
void rrr(int *stack_a, int *stack_b, int size_a, int size_b);

#endif