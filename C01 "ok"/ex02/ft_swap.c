/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:55:46 by luda-cun          #+#    #+#             */
/*   Updated: 2024/06/28 14:50:36 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

/*
int main()
{
	int a;
	int b;
	int *ptra;
	int *ptrb;

	a = 10;
	b = 20;
	printf("%d,%d \n",a,b);

	ptra = &a;
	ptrb = &b;

	ft_swap(ptra,ptrb);
	
	printf("%d,%d",a,b);	
}*/
