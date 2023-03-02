/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargcwrong.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:32:19 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:33:55 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "declarations.h"

void	ft_checkargcwrong(int argc)
{
	if (argc == 42)
	{
		ft_putsecret();
	}
	else if (argc < 2 || argc > 3)
	{
		ft_putmessage1();
	}
	else if (argc != 2 && argc != 3)
	{
		ft_unknownerror(argc);
	}
}