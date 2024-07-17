/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-cout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:49:48 by lle-cout          #+#    #+#             */
/*   Updated: 2024/06/30 17:22:32 by lle-cout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int *col, int *lin)
{
	if (*col < 0 || *lin < 0)
	{
		write(1, "Erreur : Au moins une des deux valeurs est negative.\n", 54);
		write(1, "Conversion en nombre positif...\n", 33);
		if (*col < 0)
		*col = -*col;
		if (*lin < 0)
		*lin = -*lin;
	}
}

void	ft_first_last(int col, char gauche, char mid, char droite)
{
	int	i;

	i = 0;
	ft_putchar(gauche);
	while (i < col - 2)
	{
		ft_putchar(mid);
		i++;
	}
	if (col > 1)
		ft_putchar(droite);
	ft_putchar('\n');
}

void	ft_body(int col, int lin, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < lin)
	{
		ft_putchar(c);
		while (j < col)
		{
			ft_putchar(' ');
			j++;
		}
		j = 0;
		if (col >= 2)
			ft_putchar(c);
		ft_putchar('\n');
		i++;
	}
}

void	rush(int col, int lin)
{
	if (col == 0 || lin == 0)
	{
		write(1, "Erreur : Valeur de zero detectee.\n", 35);
		return ;
	}
	ft_is_negative(&col, &lin);
	ft_first_last(col, 'o', '-', 'o');
	ft_body(col -2, lin -2, '|');
	if (lin > 1)
		ft_first_last(col, 'o', '-', 'o');
}
