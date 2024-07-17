/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-02 17:32:34 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/06 13:40:56 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		while (to_find[j] != 0 && str[i + j] != 0 && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!(to_find[j] != 0))
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(int argc, char **argv)
// {
//     printf("s1 = %s s2 = %s \n",argv[1],argv[2]);
// 	printf("strstr = 00 ft_strstr = %s\n", ft_strstr(argv[1],argv[2]));
//     // printf("strstr = 00 ft_strstr = %s\n", ft_strstr(argv[1],argv[2]));
// }