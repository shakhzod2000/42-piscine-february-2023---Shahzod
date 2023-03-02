/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:39:26 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/22 20:39:29 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	signal;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i -1] >= 'A' && str[i -1] <= 'Z')
			signal = 1;
		else if (str[i -1] >= 'a' && str[i -1] <= 'z')
			signal = 1;
		else if (str[i -1] >= '0' && str[i -1] <= '9')
			signal = 1;
		else
			signal = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && signal == 1)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && signal == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s\n", ft_strcapitalize(a));
}*/
