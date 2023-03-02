/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:59:32 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/15 23:49:45 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int c, int d)
{
	int	digit1;
	int	digit2;
	int	digit3;
	int	digit4;

	digit1 = c / 10 + '0';
	digit2 = c % 10 + '0';
	digit3 = d / 10 + '0';
	digit4 = d % 10 + '0';
	write (1, &digit1, 1);
	write (1, &digit2, 1);
	write (1, " ", 1);
	write (1, &digit3, 1);
	write (1, &digit4, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
