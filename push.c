/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:43:56 by tbelleng          #+#    #+#             */
/*   Updated: 2022/12/20 16:02:40 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(n_list **lst, n_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

void	push_a(n_list *stack_a, n_list *stack_b)
{
	n_list		*tmp;

	tmp = create_nb(stack_a->data, stack_a->pos);
	ft_lstadd_front(&stack_b, tmp);
	tmp = stack_a->next;
	free(stack_a);
	stack_a = tmp;
	printf("In B stack we got : %d\n", stack_b->data);
	write(1, "pa\n", 3);
}


void	push_b(n_list *stack_b, n_list *stack_a)
{
	n_list		*tmp;

	tmp = create_nb(stack_b->data, stack_b->pos);
	ft_lstadd_front(&stack_a, tmp);
	tmp = stack_b->next;
	free(stack_b);
	stack_b = tmp;
	printf("dans a on a : %d\n", stack_a->data);
	write(1, "pb\n", 3);
}

/*void	push_a(n_list *stack_a, n_list *stack_b)
{
	n_list		*tmp;
	n_list		*tmp2;

	tmp = create_nb(stack_a->data, stack_a->pos);
	tmp2 = stack_a->next;
	free(stack_a);
	stack_a= (tmp2);
	ft_lstadd_front(&(*stack_a), tmp);
	printf("dans b on a : %d\n", (*stack_a)->data);
	write(1, "pa\n", 3);
}*/