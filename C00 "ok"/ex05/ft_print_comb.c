/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:24:26 by luda-cun          #+#    #+#             */
/*   Updated: 2024/06/27 12:03:49 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pi(int i, int j, int k);
void	ft_print_comb_base(int i, int j, int k);
void	ft_print_base(void);

void	pi(int i, int j, int k)
{
	int	l;
	int	o;

	l = 30;
	o = 44;
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != 55 || j != 56 || k != 57)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb_base(int i, int j, int k)
{
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				pi(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	j = 49;
	k = 50;
	ft_print_comb_base(i, j, k);
}

//int main (void)
//{
//	ft_print_comb();
//	return (0);
//}
