/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 14:34:47 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/25 14:34:53 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	s1[] = "It ia what ia is";
	char	s2[] = "It is what is is";
	
	if (ft_strcmp(s1, s2) == 0)
	printf("strings are equal\n");
	if (ft_strcmp(s1, s2) < 0)
	printf("s1 < s2\n");
	if (ft_strcmp(s1, s2) > 0)
	printf("s1 > s2\n");
	
	if (strcmp(s1, s2) == 0)
	printf("strings are equal\n");
	if (strcmp(s1, s2) < 0)
	printf("s1 < s2\n");
	if (strcmp(s1, s2) > 0)
	printf("s1 > s2\n");
	return 0;
}*/
