/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davfern3 <davfern3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:58:48 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/14 21:36:48 by davfern3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count(char *str);
int ft_check(char *str);
void segment(char *str);
char	*ft_strcat(char *dest, char *src);
int ft_strlen(char *str);

int main(int argc, char **argv)
{
    int check;

    if (argc == 2)
    {
        check = ft_check(argv[1]);
        if (check == 1)
            return (1);
        if(ft_strlen(argv[1]) % 3 == 1)
        {
            char tab2[] = "00";
            ft_strcat(tab2,argv[1]);
            // printf("1 : %s",tab2);
            segment(tab2);
            return (0);

        }
        if(ft_strlen(argv[1]) % 3 == 2)
        {
            char tab2[] = "0";
            ft_strcat(tab2,argv[1]);
            // printf("1 : %s",tab2);
            segment(tab2);
            return (0);

        }
        if(ft_strlen(argv[1]) % 3 == 0)
        {
            segment(argv[1]);
            return (0);

        }
        /*check = ft_check(argv[1]);
        if (check == 1)
            return (1);
		segment(argv[1]);
        // count(argv[1]);*/
        return (0);
    }
    if (argc == 3)
    {
        check = ft_check(argv[2]);
        if (check == 1)
            return (1);
        count(argv[2]);
        return (0);
    }
    write(0, "Error", 5);
    return (1);
}
