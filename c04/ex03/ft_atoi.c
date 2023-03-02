/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mine.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:32:44 by sshermat          #+#    #+#             */
/*   Updated: 2023/03/01 13:33:15 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	j;
	int	sign;
	int	res;

	j = 0;
	sign = 1;
	res = 0;
	while ((str[j] >= '\t' && str[j] <= '\r') || str[j] == 32)
		j++;
	while (str[j] == '+' || str[j] == '-')
	{
		if (str[j] == '-')
			sign *= -1;
		j++;
	}
	while (str[j] >= '0' && str[j] <= '9')
	{
		res = res * 10 + str[j] - '0';
		j++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi("  ---+--+11256"));
}*/
