/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_messages2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:16:06 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:35:54 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "declarations.h"

void	ft_dictnotfound(void)
{
	ft_puterror();
	ft_putstr("\n>> Please make sure your new");
	ft_putstr(" dictionary looks like this:");
	ft_putstr(" <*.dict> always.\n\nuwu\n");
}