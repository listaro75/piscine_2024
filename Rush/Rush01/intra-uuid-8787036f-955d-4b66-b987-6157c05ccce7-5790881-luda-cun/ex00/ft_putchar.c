/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-06 13:49:49 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-06 13:49:49 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}

void	ft_str(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    i=0;
}
void    ft_putnb(int ic)
{
    ic += 48;
    write(1,&ic,1); 
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
int ft_14(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (!(str[i]>='1' && str[i]<='4'))
            return (1);
        i++;
    }
    return (0);
}