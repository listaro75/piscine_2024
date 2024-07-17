/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-02 15:07:39 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-02 15:07:39 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	printf("s1 = %s s2 = %s \n",argv[1],argv[2]);
// 	printf("stnrcmp = %d ft_strncmp = %d\n",strncmp(argv[1],argv[2],2),
// 	ft_strncmp(argv[1],argv[2],2));
// 	return (0);
// }