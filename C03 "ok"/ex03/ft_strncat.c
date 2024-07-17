/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 12:53:31 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/09 14:05:30 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] != 0 && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
		dest[i + j] = 0;
	return (dest);
}
//  #include <stdio.h>
//  #include <string.h>

//  int	main(int argc, char **argv)
//  {

//  	printf("%s\n",ft_strncat(argv[1], argv[2], 100));
//  	return (0);
//  }
