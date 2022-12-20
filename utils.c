/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:36:24 by tbelleng          #+#    #+#             */
/*   Updated: 2022/12/15 18:03:24 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_lstadd_back(n_list **lst, n_list *new)
{
    if (!*lst)
        *lst = new;
    else
        ft_lstlast(*lst)->next = new;
}

n_list *ft_lstlast(n_list *lst)
{
    while (lst != NULL)
    {
        if (lst->next == NULL)
            return (lst);
        lst = lst->next;
    }
    return (lst);
}

int ft_atoi(const char *nptr)
{
    int i;
    int result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    else if (nptr[i] == '+')
        i++;
    while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
    {
        result *= 10;
        result = result + nptr[i] - '0';
        i++;
    }
    return (result * sign);
}