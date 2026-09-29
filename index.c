#include "header.h"

int check_atoi(char *str, int *error_flag)
{
    int i = 0;
    long result = 0;
    int sign = 1;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (str[i] == '\0')
        *error_flag = 1;

    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            *error_flag = 1;
            return (0);
        }
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    result = result * sign;
    if (result > 2147483647 || result < -2147483648)
        *error_flag = 1;

    return ((int)result);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);

    int max_size = argc - 1;
    int *stack_a = (int *)malloc(sizeof(int) * max_size);
    int *stack_b = (int *)malloc(sizeof(int) * max_size);

    if (!stack_a || !stack_b)
        return (1);

    int size_a = 0;
    int size_b = 0;
    int i = 1;
    int error_flag = 0;

    while (i < argc)
    {
        stack_a[size_a] = check_atoi(argv[i], &error_flag);
        if (error_flag == 1)
        {
            write(2, "Error\n", 6);
            free(stack_a);
            free(stack_b);
            return (1);
        }
        size_a++;
        i++;
    }

    if (has_duplicates(stack_a, size_a))
    {
        write(2, "Error\n", 6);
        free(stack_a);
        free(stack_b);
        return (1);
    }

    if (!is_sorted(stack_a, size_a))
        sort_stack(stack_a, stack_b, &size_a, &size_b);

    free(stack_a);
    free(stack_b);
    return (0);
}