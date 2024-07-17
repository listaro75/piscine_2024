/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segment.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davfern3 <davfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:26:02 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/14 18:21:08 by davfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int	number(int nb);

int count(char *str);

int is_tree(int nb)
{
    int mod = nb % 3;
    
    if (mod == 0)
    {
        return (nb - 1);
    }
    else
    {
        return (nb);
    }
}


void segment(char *str)
{
    int i;
    int j;
    int k;
    int cnt;
    int l = 0;
    char tab[13][13];

    i = 2;
    j = ft_strlen(str) - 1;
    k = ft_strlen(str);
    cnt = (is_tree(ft_strlen(str)) / 3) - 1;
    if ( k % 3 == 0)
    {
        k = (k / 3) - 1;
        while (k >= 0)
        {
			tab[k][i - 1] = 0;
            while (i >= 0)
            {
                tab[k][i] = str[j];
               // write(1, &str[j], 1);
                i--;
                j--;
            }
            // write (1, "\n", 1);
            i = 2;
            k--;
        }
        while (cnt > -1)
        {
            count(tab[l]);
            number(cnt + 30);
            l++;
			cnt--;
        }
		count(tab[l]);
    }
}