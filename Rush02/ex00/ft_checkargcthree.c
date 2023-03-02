/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargcthree.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:16:15 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:33:53 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "declarations.h"

void	ft_checkargcthree(int argc, char *str1, char *str2)
{
	if (argc != 3)
		return;
	if (ft_checkunsigned(str2) == 1)
	{
		ft_putmessage3();
		return;
	}
/* program here */
 	if (ft_checkdictname(str1) != 0)
		return;
/*	ft_parsedictnew(str1);
	ft_writenbr(str2); */
}