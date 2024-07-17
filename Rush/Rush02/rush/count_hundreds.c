/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_hundreds.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davfern3 <davfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:52:46 by davfern3          #+#    #+#             */
/*   Updated: 2024/07/14 18:15:03 by davfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*number(int nb);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int translate(char str)
{
    return (str = str - 47);
}

int spe(char str)
{
	return (str = str - 37);
}
int tens(char str)
{
	return (str = str - 29);
}

int count(char *str)
{
    int len = ft_strlen(str);
    int i;

	i = 0;
	while (str[i])
	{
		if (len == 3)
		{
			if (str[i] == '0')
			{
					len--;
					i++;
			}
			else
			{
				number(translate(str[i]));
				i++;
				number(29);
				len--;
				if (str[i] == '0')
				{
					if (str[i + 1] == '0')
					{
						len = len -2;
						return (0);
					}
					else
					{
						len--;
						i++;
					}
				
				}
			}
		}
			
		if (len == 2)
		{
			if (str[i] == '0')
			{
				len--;
				i++;
			}
			else if (str[i] == '1')
			{
				i++;
				number(spe(str[i]));
				len = len - 2;
			}
			else
			{
				number(tens(str[i]));
				i++;
				len--;
				if (str[i] == '0')
				{
					len--;
					return (0);
				}
			}
		}
		if (len == 1)
		{
			number(translate(str[i]));
			return (0);
		}
		return (0);
	}
	return (0);
}

/*int main(void)
{
	count("303");
	return(0);
}*/