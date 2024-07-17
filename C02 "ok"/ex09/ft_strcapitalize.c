/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:06:05 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/02 15:01:29 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_maj_min(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_verif_alphanumeric(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
		if (!(c >= 'a' && c <= 'z'))
			if (!(c >= '0' && c <= '9'))
				return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_maj_min(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (ft_verif_alphanumeric(str[i - 1]) == 0)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s",ft_strcapitalize(argv[1]));
	return (0);
}*/