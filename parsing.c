/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:01:22 by tbelleng          #+#    #+#             */
/*   Updated: 2022/12/20 14:50:26 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

n_list    *create_nb(int a, int b)
{
    n_list     *new;

    new = malloc(sizeof(n_list));
    if(!new)
        return (NULL);
    new->data = a;
    new->pos = b;
    new->next = NULL;

    return (new);
}

int     main(int ac, char **av)
{
    
    int     i;
    int     a;
    n_list  *stack_a;
    n_list  *stack_b;
    n_list  *tmp;  

    i = 1;
    stack_a = NULL;
    stack_b = NULL;
    if (ac == 1)
    {
       write(1, "Error\n", 6);
       return (0);
    }
    //if (!checker(ac, av))
    //    return (0);
    while (i < ac)
    {
        a = ft_atoi(av[i]);
        tmp = create_nb(a, i);
        printf("val : %d and pos : %d\n", a, i);
        ft_lstadd_back(&stack_a, tmp);
        i++;
    }
    push_a(stack_a, stack_b);
    push_a(stack_a, stack_b);
    //printf("dans b on a : %d\n", stack_b->data);
    //push_b(stack_a, stack_b);
    
    //printf("dans b on a %d\n", stack_b->data);
    return (0);
}

