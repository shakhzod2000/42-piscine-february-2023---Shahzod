/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:54:09 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/23 16:54:19 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
		return 0;
	
	int i = 0;
	int count_a = 0;
	
	//argv[1] = "123t"KO
	
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] == 'a' && count_a == 0)
		{
			write(1, &argv[1][i], 1);
			count_a = 1;
		}
		i++;
	}
	if (count_a == 0)
	{
		write(1, "\n", 1);
	}
	return 0;
}
