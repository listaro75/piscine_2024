/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyscrapers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skirat <skirat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:03:22 by luda-cun          #+#    #+#             */
/*   Updated: 2024/07/07 23:28:04 by skirat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void    ft_putnb(int ic);
void	ft_putchar(char c);
void	ft_str(char *str);
int ft_strlen(char *str);
int ft_14(char *str);

char *ft_savenb(char **str) /*obtenir les valeurs entrées sans les espaces*/
{   
    int i;
    int j;
    char *save;

    save = (char *)malloc(100*sizeof(char));
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

void	ft_init(int **mat, int x, int y) /*initialisation de la matrice*/
{
	int i;
    int j;

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
}

void	ft_condition_simple(int **mat,char *save) /*entrée des valeurs évidentes*/
{
    int i;
    int j;
    int counter;

	i = 0;
    j = 0;
    counter = 0;
    
    printf("%s", save);
    while(i < 4)
    {
        if (save[counter] == '4')
             while (i < 4)
             {
                counter++;
                mat[i][j] = counter;
                i++;
             }
            
             
        else if (save[counter] == '1')
            {
                mat[i][j] = 4;
            }
        j++;
        i++;
    }
    
    
  
}

int    ft_matrice(char *save,int x, int y) /*création de la matrice*/
{
    int i;
    int j;
    int **mat;
    i = 0;
    mat = (int **) malloc(x*sizeof(int**));
    while (i < x) {
    mat[i] = (int*) malloc(y* sizeof(int*));
    i++;
    }
    void ft_init(int **mat, int x, int y);
    
    
	ft_condition_simple(mat, save);
    
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