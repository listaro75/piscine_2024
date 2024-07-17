/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:32:18 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/02 15:05:27 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != 0)
	{
		i++;
	}
	if (size == 0)
		return (i);
	while (j < size && src[j] != 0)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = 0;
	return (i);
}

int main(){
	char s1[] = "wesh alors";
	char s2[] = "000000000000";
	printf("%d \n %s\n",ft_strlcpy(s1,s2,12), s1);
}