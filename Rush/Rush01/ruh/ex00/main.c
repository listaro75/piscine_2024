/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirat <skirat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:06:17 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/07 23:19:43 by skirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_str(char *str);
void    ft_matrice(char *save,int x, int y);
// int     ft_atoi(char *str);
char    *ft_savenb(char **str);
int ft_error(char *str);

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_str("Mettre un argument\n");
        return (1);
    }
    else 
    {   
        char *save;
        save = ft_savenb(argv);
        if (ft_error(save) == 1)
        {    
            return(1);
        }
        ft_matrice(save,4,4);
        // printf("%s",save);
    }
    return (0);
}
