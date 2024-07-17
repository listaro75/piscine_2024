/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-08 09:28:18 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-08 09:28:18 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_verif(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (1);
		i++;
	}
	if (i < 2 || ft_verif(str) == 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int long	n;
	int			i;

	n = nbr;
	i = 0;
	while (base[i])
	{
		i++;
	}
	if (ft_check(base) == 0)
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = n * -1;
		}
		if (n > i - 1)
			ft_putnbr_base(n / i, base);
		ft_putchar(base[n % i]);
	}
}
// int main()
// {
//     ft_putnbr_base(127,"01");
// }
