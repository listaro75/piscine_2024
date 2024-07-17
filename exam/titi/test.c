/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-12 11:37:58 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-12 11:37:58 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int	main()
{
	char *str = "lucienjetebaise";
	int i;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
	return (0);
}