/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:43:51 by tbelleng          #+#    #+#             */
/*   Updated: 2022/12/19 18:45:19 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void      swap_a(n_list *stack_a)
{
    n_list      *elem1;
    n_list      *elem2;
    n_list      *tmp;

    if (!stack_a)
        return ;
    elem1 = create_nb(stack_a->data, stack_a->pos);
    stack_a = stack_a->next;
    elem2 = create_nb(stack_a->data, stack_a->pos);
    stack_a = stack_a->next;
    tmp = stack_a;
    free(stack_a);
    stack_a = tmp;
    ft_lstadd_front(&stack_a, elem1);
    ft_lstadd_front(&stack_a, elem2);
    printf("A stack first elem equal : %d", stack_a->data);
    write(1, "sa\n", 3);
}

void      swap_b(n_list *stack_b)
{
    n_list      *elem1;
    n_list      *elem2;
    n_list      *tmp;

    if (!stack_b)
        return ;
    elem1 = create_nb(stack_b->data, stack_b->pos);
    stack_b = stack_b->next;
    elem2 = create_nb(stack_b->data, stack_b->pos);
    stack_b = stack_b->next;
    tmp = stack_b;
    free(stack_b);
    stack_b = tmp;
    ft_lstadd_front(&stack_b, elem1);
    ft_lstadd_front(&stack_b, elem2);
    write(1, "sa\n", 3);
}

