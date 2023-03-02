/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 09:18:58 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/25 16:49:35 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest1[50] = "Have a nice day";
	char src1[50] = "great";
	unsigned int n = 4;
	//dest1 ;
	//src1 = "Bon appetit!";
	strncpy(dest1, src1, n);
	printf("strncpy:%s\n", dest1);
	
	char dest2[50] = "Have a nice day";
	char src2[50] = "great";
	
	//dest2 = "Bom dia";
	//src2 = "Chao";
	ft_strncpy(dest2, src2, n);
	printf("ft_strncpy:%s\n", dest2);
}*/
