/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:09:54 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:28:07 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "declarations.h"

int	main(int argc, char **argv)
{
	ft_checkargcwrong(argc);
	ft_checkargctwo(argc, argv[1]);
	ft_checkargcthree(argc, argv[1], argv[2]);
	return (0);
}
