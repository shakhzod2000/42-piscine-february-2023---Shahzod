/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:07:16 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/20 18:07:26 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i <= size -1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j +1])
			{
				tmp = tab[j];
				tab[j] = tab[j +1];
				tab[j +1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int arr[] = {9,5,8,4,3,1};
	int i = 0;
	int n = sizeof(arr)/sizeof(arr[i]); //identifying (n) the number
	 //of integers we have.
	//Each integer has 4 bytes(sizeof(arr[i]) and sizeof(arr) = 6*4=24
	ft_sort_int_tab(arr, n);
	while (i < n)
	{
	printf("%d ", arr[i]);
	i++;
	}
	return (0);	
}*/
