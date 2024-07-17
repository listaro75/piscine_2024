/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-02 16:57:49 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/04 15:38:06 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>
// #include <string.h>
// int	main(int argc, char **argv)
// {
// 	printf("s1 = %s s2 = %s \n",argv[1],argv[2]);
// 	printf("stnrcmp = 00 ft_strncmp = %s\n", ft_strcat(argv[1],argv[2]));
// 	return (0);
// }