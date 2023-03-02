/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:51:08 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/25 21:51:11 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char dest[50] = "Finish e";
	char src[] = "valuation";
	
	ft_strcat(dest, src);
	printf("ft_strcat: %s\n", dest);
	
	char dest1[50] = "Leave me al";
	char src1[] = "one please";
	
	strcat(dest1, src1);
	printf("strcat: %s\n", dest1);
}*/
