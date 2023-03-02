/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshermat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:25:50 by sshermat          #+#    #+#             */
/*   Updated: 2023/02/25 19:25:52 by sshermat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "";
	char b[] = "dfyhjk97";
	unsigned int n = 1;
	printf("%d\n", ft_strncmp(a, b, n));
	
	if (ft_strncmp(a, b, n) == 0)
	printf("strings are equal\n");
	if (ft_strncmp(a, b, n) > 0)
	printf("s1 > s2\n");
	if (ft_strncmp(a, b, n) < 0)
	printf("s1 < s2\n");
	
	printf("%d\n", strncmp(a, b, n));
	
	if (strncmp(a, b, n) == 0)
	printf("strings are equal\n");
	if (strncmp(a, b, n) > 0)
	printf("s1 > s2\n");
	if (strncmp(a, b, n) < 0)
	printf("s1 < s2\n");
}*/
