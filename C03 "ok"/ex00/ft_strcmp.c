/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:32:01 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/02 17:05:28 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	printf("s1 = %s s2 = %s \n",argv[1],argv[2]);
// 	printf("strcmp = %d ft_strcmp = %d\n",strcmp(argv[1],argv[2]),
//  ft_strcmp(argv[1],argv[2]));
// 	return (0);
// }
