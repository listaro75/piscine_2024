// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_sort_params.c                                   :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024-07-15 12:43:25 by luda-cun          #+#    #+#             */
// /*   Updated: 2024-07-15 12:43:25 by luda-cun         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */
// #include <stdio.h>

// void ft_putchar(char c)
// {
//     write(1,&c,1);
// }

// void	ft_swap(char *a, char *b)
// {
// 	char	c;

// 	c = *b;
// 	*b = *a;
// 	*a = c;
// }
// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] != 0 && s2[i] != 0)
// 	{
// 		if (!(s1[i] == s2[i]))
// 			return (s1[i] - s2[i]);
// 		i++;
// 	}
// 	return (s1[i] - s2[i]);
// }

// int main(int argc, char **argv)
// {
//     int i;
//     int j;
// 	int k;

// 	k = 0;
//     j = 0;
//     if (argc > 1)
//     {
// 		while (j < argc)
// 		{
// 			i = j + 1;
// 	        while (argv[i])
//     	    {
//        	     if (ft_strcmp(argv[i],argv[j]) < 0)
//         	    {
// 					ft_swap(&argv[i],&argv[j]);
// 				}
// 				i++;
// 			}
// 			j++;
// 		}
//     }
//     i = 1;
// 	j = 0;
//     while (argv[i])
// 		{
// 			while (argv[i][j])
// 			{
// 				ft_putchar(argv[i][j]);
// 				j++;
// 			}
// 			ft_putchar('\n');
// 			j = 0;
// 			i++;
// 		}
//     return (0);
// }