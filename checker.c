/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:17:09 by tbelleng          #+#    #+#             */
/*   Updated: 2022/12/19 13:42:58 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool  is_an_int(int ac, char **av)
{
    int     i;
    i = 1;

    while(i < ac)
    {
        if (*av[i] < -2147483648 || *av[i] > 2147483647)
            return(false);
        i++;
    }
    return (true);
}

/*t_bool  is_nb(int ac, char **av)
{
    int     i;

    i = 1;
    while (i < ac)
    {
        if (av[i] != int)

    }

}*/

t_bool   isnt_double(int ac, char **av)
{
    int     i;
    int     j;  

    i = 1;
    while (i < ac)
    {
        j = 0;
        while (j < ac)
        {
            if (av[i] == av[j])
                return (false);
            j++;
        }
        i++;
    }
    return(true);
}

int     checker(int ac, char **av)
{
    if (!is_an_int(ac, av))
    {
        write(1, "Error\n", 6);
        return (0);
    }
    if (!isnt_double(ac, av))
    {
        write(1, "Error\n", 1);
        return (0);
    }
    return (1);
}