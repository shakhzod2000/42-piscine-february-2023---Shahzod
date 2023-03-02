/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numtoword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:05:17 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/26 22:05:21 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	numtoword(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		write(1, "Error\n", 6);
			return (0);
	}
	if (!(av[1][i] >= '0' && av[1][i] <= '9'))
	{
		write(1, "Put number only\n", 16);
			return (0);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] == '0')
			write(1, "zero", 4);
		else if (av[1][i] == '1')
			write(1, "one", 3);
		else if (av[1][i] == '2')
			write(1, "two", 3);
		else if (av[1][i] == '3')
			write(1, "three", 5);
		else if (av[1][i] == '4')
			write(1, "four", 4);
		else if (av[1][i] == '5')
			write(1, "five", 4);
		else if (av[1][i] == '6')
			write(1, "six", 3);
		else if (av[1][i] == '7')
			write(1, "seven", 5);
		else if (av[1][i] == '8')
			write(1, "eight", 5);
		else if (av[1][i] == '9')
			write(1, "nine", 4);
		i++;
	}
	return (0);
}
