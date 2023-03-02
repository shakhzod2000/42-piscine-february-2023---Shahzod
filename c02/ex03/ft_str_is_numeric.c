/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:21:45 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/22 17:21:48 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!('0' < str[i] && str[i] < '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "12345";
	char b[] = "42 school";
	char c[] = "#%@";
	char d[] = "";
	
	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n",ft_str_is_numeric(b));
	printf("%d\n",ft_str_is_numeric(c));
	printf("%d\n",ft_str_is_numeric(d));
}*/
