/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:50:17 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/01 10:12:38 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] < 47 || str[i] > 58)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%d",ft_str_is_numeric(argv[1]));
	return (0);
}*/
