/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdictname.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:51:31 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:33:50 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "declarations.h"

int	ft_checkdictname(char *str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (str[i] == '.'
			&& str[i + 1] == 'd'
			&& str[i + 2] == 'i'
			&& str[i + 3] == 'c'
			&& str[i + 4] == 't'
			&& str[i + 5] == '\0')
				return (0);
		i++;
	}
	ft_dictnotfound();
	return (1);
}