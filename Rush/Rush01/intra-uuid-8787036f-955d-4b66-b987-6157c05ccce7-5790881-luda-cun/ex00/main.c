/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:06:17 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/07 19:54:18 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_str(char *str);
void	ft_matrice(char *save, int x, int y);
char	*ft_savenb(char **str);
int	ft_error(char *str);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_str("Error\n");
		return (1);
	}
	else
	{
		char	*save;
		save = ft_savenb(argv);
		if (ft_error(save) == 1)
			return(1);
		ft_matrice(save,4,4);
	}
	return (0);
}
