/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:45:57 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/01 08:29:04 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	save;

	i = 0;
	j = 0;
	while (i != size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			save = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = save;
			i = 0;
		}
		else
		{
			i++;
		}
	}	
}
/*
int	main(void)
{
	int	i;
	i = 0;
	int tab[6];
	tab[0]=7;
	tab[1]=5;
	tab[2]=4;
	tab[3]=3;
	tab[4]=2;
	tab[5]=0;

	while ( i < 6)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab ,6);

	i = 0;

	while ( i < 6)
	{
		printf("%d",tab[i]);
                i++;
	}
	printf("\n");
	return (0);

}*/
