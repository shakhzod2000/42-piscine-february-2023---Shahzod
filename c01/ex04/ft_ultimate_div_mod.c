/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:19:02 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/16 21:05:20 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
/*
int	main(void)
{
	int	p;
	int	m;

	p = 15;
	m = 3;
	ft_ultimate_div_mod(&p, &m);
	printf("%d\n%d", p, m);
	return (0);
}*/
