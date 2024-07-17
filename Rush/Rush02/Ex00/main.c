/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 15:24:22 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-13 15:24:22 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	ft_print_nbr(char *str);
void    ft_putstr(char *str);
void    count(char *str);

int main(int argc, char **argv)
{
    if (argc == 2)
    {
	    count("292");
        return (0);
    }
    if (argc == 3)
    {
        ft_putstr("Argument 1:");
        ft_print_nbr(argv[1]);
        ft_putstr("Argument 2:");
        ft_print_nbr(argv[2]);
        return (0);
    }
    else
    {
        write(0, "Error", 5);
        return (1);   
    }

}
