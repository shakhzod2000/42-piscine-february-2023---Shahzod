/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:23:13 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/28 17:36:00 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;
	char		digit;

	n = nb;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	digit = n % 10 + '0';
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	write(1, &digit, 1);
}
/*
int main()
{
	ft_putnbr(2147);
}*/
