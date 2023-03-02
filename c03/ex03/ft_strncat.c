/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:46:21 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/25 22:46:24 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
	char dest[50] = "Let things go ";
	char src[] = "to feel happier";
	unsigned int nb = 4;
	
	printf("ft_strncat:%s\n", ft_strncat(dest, src, nb));

	char dest1[50] = "Let things go ";
	char src1[] = "to feel happier";
	
	printf("strncat:%s\n", strncat(dest1, src1, nb));
}*/
