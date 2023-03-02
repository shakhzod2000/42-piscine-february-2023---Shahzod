/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:24:11 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/21 11:24:17 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[25] = "Nice to meet you!";
	char src[24] = "You too!";
	strcpy(dest, src);
	printf("strcpy: %s\n", dest);
	
	char dest2[25] = "Nice to meet you!";
	char src2[24] = "You too!";
	ft_strcpy(dest2, src2);
	printf("ft_strcpy: %s\n", dest2);
}*/
