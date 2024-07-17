/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:03:49 by luda-cun          #+#    #+#             */
/*   Updated: 2024/06/29 12:14:21 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}
/*
int	main(void)
{
	int a;
	int b;
	int *aa;
	int *bb;

	a = 11;
	b = 2;
	aa = &a;
	bb = &b;
	
	printf("a = %d b = %d", a, b);

	ft_ultimate_div_mod(aa,bb);

	printf(" div = %d mod = %d \n",a,b);

	return (0);

}*/
