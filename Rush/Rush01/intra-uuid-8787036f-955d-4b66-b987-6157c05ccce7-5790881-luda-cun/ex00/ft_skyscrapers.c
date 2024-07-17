/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyscrapers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-06 14:03:22 by luda-cun          #+#    #+#             */
/*   Updated: 2024-07-06 14:03:22 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void    ft_putnb(int ic);
void	ft_putchar(char c);
void	ft_str(char *str);
int ft_strlen(char *str);
int ft_14(char *str);

char *ft_savenb(char **str)
{   
    int i;
    int j;
    char *save;

    j = 0;
    i = 0;
    while (str[1][i] != 0)
    {
        if(str[1][i] >= '1' && str[1][i] <= '4')
        {
            save[j] = str[1][i];
            j++;
        }
        i++;
    }
    save[j] = 0;

    return(save);
}

int    ft_error(char *str)
{
    if (ft_strlen(str) != 16)
    {                
        ft_str("Error\n");
        return(1);
    }
    if (ft_14(str) == 1)
    {
        ft_str("Error\n");
        return(1);
    }
    // if (ft_strcal(str)!=32)
    //     return (1);
    return (0);
}

int    ft_matrice(char *save,int x, int y)
{
    /*************************************************init mat********************************************************************/
    int i;
    int j;
    int mat[x][y];

    i = 0;
    j = 0;
    while (i < x)
    {
        while (j < y)
        {
            mat[i][j] = 1;
            j++;
        }
        j = 0;
        i++;
    }



    /*************************************************condition simple*******************************************************/
    
    i = 0;
    j = 0;
    printf("%s", save);
    while(i < 4)
    {
        if(save[i] == '4')
            {
                mat[0][j] = 1;
                mat[1][j] = 2;
                mat[2][j] = 3;
                mat[3][j] = 4;
            }
        else if(save[i] == '1')
            {
                mat[0][j] = 4;
            }
        j++;
        i++;
    }
    j = 0;
    while (i < 8)
    {
        if(save[i] == '4')
            {
                mat[3][j] = 1;
                mat[2][j] = 2;
                mat[1][j] = 3;
                mat[0][j] = 4;
            }
        else if(save[i] == '1')
            {
                mat[3][j] = 4;
            }
        j++;
        i++;
    }
    j = 0;
    while (i < 12)
    {
        if(save[i] == '4')
            {
                mat[j][0] = 1;
                mat[j][1] = 2;
                mat[j][2] = 3;
                mat[j][3] = 4;
            }
        else if(save[i] == '1')
            {
                mat[j][0] = 4;
            }
        j++;
        i++;
    }
    j = 0;
    while (i < 16)
    {
        if(save[i] == '4')
            {
                mat[j][3] = 1;
                mat[j][2] = 2;
                mat[j][1] = 3;
                mat[j][0] = 4;
            }
        else if(save[i] == '1')
            {
                mat[j][3] = 4;
            }
        j++;
        i++;
    }
    
    /************************************************affichage tab********************************************************************************** */
    i = 0;
    j = 0;
    while (i < x)
    {
        while (j < y)
        {
            ft_putnb(mat[i][j]);
            if(j != 3)
                ft_putchar(' ');
            
            j++;
        }
        ft_putchar('\n');
        j = 0;
        i++;
    }
    return(0);
}

