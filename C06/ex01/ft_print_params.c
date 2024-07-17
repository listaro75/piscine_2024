/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-04 16:39:14 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-04 16:39:14 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	if (argc > 1)
	{
		while (argv[i] != 0)
		{
			while (argv[i][j] != 0)
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			j = 0;
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
