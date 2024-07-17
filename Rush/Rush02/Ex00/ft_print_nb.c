/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-13 15:57:39 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-13 15:57:39 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void    ft_putstr(char *str);
void    ft_putchar(char c);
int	translate(char str);
int spe(char str);
int tens(char str);
char	*number(int nb);


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			write (0, "Error",5);
			return (1);
		}
		
		i++;
	}
	return (0);
}


int	count(char *str)
{
    int len = ft_strlen(str);
    char *anw;
    int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (len == 3)
		{
			number(translate(str[i]));
			//j = j + ft_strlen(number(translate(str[i])));
			i++;
			number(29);
			len--;
			j++;
		}
		if (len == 2)
		{
			if (str[i] == '1')
			{
				i++;
				number(spe(str[i]));
				len = len - 2;
			}
			else
			{
				number(tens(str[i]));
				j++;
				i++;
				len--;
			}
		}
		if (len == 1)
		{
			number(translate(str[i]));
			return (0);
		}
		return (0);
	}
}
// char	*ft_print_nbr(char *str)
// {
// 	int	i;
// 	char *ptr;
// 	i = 0;
// 	if (ft_check(str) == 1)
// 		return(NULL);
// 	ptr = (char *)malloc(ft_strlen(str)*sizeof(char));

// 	while (str[i])
// 	{
// 		ptr[i] = str[i];
// 		i++;
// 	}

// 	return (ptr);
// }

// char	ft_speputstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\n')
// 	{
// 		while (str[i] >= 48 && str[i] <= 57 || str[i] == 20 || str[i] == 58)
// 		{
// 			i++;
// 		}
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }