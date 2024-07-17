/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:46:21 by luda-cun          #+#    #+#             */
/*   Updated: 2024/06/29 14:44:31 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	imax;
	int	imid;
	int	imin;
	int	save;

	imax = size - 1 ;
	imid = size / 2;
	imin = 0;
	save = 0;
	while (imin != imid)
	{
		save = tab[imax];
		tab[imax] = tab[imin];
		tab[imin] = save;
		imax--;
		imin++;
	}
}
/*
int main(void){
	int tab[7];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	tab[6] = 7;
	int i = 0;
	int j = 0;

	while (tab[i] != 0)
	{
		printf("%d",tab[i]);
		i++;
	}

	ft_rev_int_tab(tab, 7);
	
	while (tab[j] != 0){
		printf("%d",tab[j]);
		j++;
	}

	return (0);
}*/
