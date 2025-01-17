/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:14:00 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/01 10:54:21 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] < 96 || str[i] > 123)
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}
