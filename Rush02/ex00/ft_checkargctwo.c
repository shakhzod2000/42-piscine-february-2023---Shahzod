/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargctwo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:32:34 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:33:54 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "declarations.h"

void	ft_checkargctwo(int argc, char *str)
{
	if (argc != 2)
		return;
	if (ft_checkunsigned(str) == 1)
	{
		ft_putmessage3();
		return;
	}
/* program here */
/*	ft_parsedictown();
	ft_writenbr(str2); */
}