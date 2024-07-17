/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-05 11:25:59 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-05 11:25:59 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoirac(char *str, int sign, int result, int i)
{
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
			i++;
		}
		if (str[i] == '+')
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result +(str[i] - 48);
		i++;
	}
	result = result * sign;
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	return (ft_atoirac(str, sign, result, i));
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
//     printf("%d\n", ft_atoi(" 555"));
//     return(0);
// }
