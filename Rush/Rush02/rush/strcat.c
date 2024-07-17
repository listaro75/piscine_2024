/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtree.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-14 17:03:41 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-14 17:03:41 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	num;

	num = ft_strlen(dest);
	i = num;
	j = 0;
	num += ft_strlen(src);
	while (i < num)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[num] = 0;
	return (dest);
}