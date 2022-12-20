/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:01:15 by tbelleng          #+#    #+#             */
/*   Updated: 2022/12/19 18:45:20 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef int t_bool;
# define false 0
# define true 1

typedef struct s_list
{
    int     data;
    int     pos;
    struct s_list   *next;
}   n_list;

int	    ft_atoi(const char *nptr);
void	ft_lstadd_back(n_list **lst, n_list *new);
void	ft_lstadd_front(n_list **lst, n_list *new);
void	push_a(n_list *stack_a, n_list *stack_b);
void	push_b(n_list *stack_b, n_list *stack_a);


void      swap_a(n_list *stack_a);
void      swap_b(n_list *stack_b);

n_list    *create_nb(int a, int b);

n_list *ft_lstlast(n_list *lst);

t_bool  is_an_int(int ac, char **av);
t_bool  isnt_double(int ac, char **av);
int     checker(int ac, char **av);

#endif