/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:11:02 by luda-cun          #+#    #+#             */
/*   Updated: 2024/06/29 12:02:29 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void){
	
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*d;
	int	*m;

	a = 10;
	b = 2;
	div = 0;
	mod = 0;
	d = &div;
	m = &mod;
	ft_div_mod(a, b, d, m);

	printf("a = %d b = %d a/b = %d les restes est de %d", a, b, *d, *m);
	return (0);
	
}*/
