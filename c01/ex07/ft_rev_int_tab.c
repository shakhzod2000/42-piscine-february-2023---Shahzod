/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:33:32 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/20 13:26:55 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = size - 1;
	while (i >= size / 2)
	{		
		tmp = tab[size - i -1];
		tab[size - i -1] = tab[i];
		tab[i] = tmp;
		i--;
	}
}
/*
#include <stdio.h>
int	main()
{
	int nbr[] = {1,5,4,2,5,5,5,1};	
	int s = 7;
	int i = 0;
	
	while (i < s)
	{
		printf("%d, ", nbr[i]);
		i++;
	}
	ft_rev_int_tab(nbr, s);
	printf("\n");
	
	i = 0;
	while (i < s)
	{
		printf("%d, ", nbr[i]);
		i++;
	}

	return (0);
}
*/
