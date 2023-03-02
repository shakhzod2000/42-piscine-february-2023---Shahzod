/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_messages.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:11:05 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:23:40 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "declarations.h"

void	ft_puterror(void)
{
	ft_putstr("Error\n");
}

void	ft_putsecret(void)
{
	ft_puterror();
	ft_putstr("\nWe want you to tell us....");
	ft_putstr(" he paused, The Answer.\nThe Answer?");
	ft_putstr(" said Deep Thought.\nThe Answer to");
	ft_putstr(" what?\nLife! urged Fook.\nThe Universe!");
	ft_putstr(" said Lunkwill.\nEverything! they said");
	ft_putstr(" in chorus.\nDeep Thought paused for");
	ft_putstr(" a moment's reflection.\nTricky,");
	ft_putstr(" he said finally.\n\n0w0\n");
}

void	ft_putmessage1(void)
{
	ft_puterror();
	ft_putstr("\n>> Use the program like this:");
	ft_putstr(" ./rush-02 <number>\n>> Or, if you want");
	ft_putstr(" to use a new dictionary,");
	ft_putstr(" use the program like this:");
	ft_putstr(" ./rush-02 <new.dict> <number>\n>> If");
	ft_putstr(" you want to find a secret, raise the");
	ft_putstr(" argument count to 42.\n\nuwu\n");
}

void	ft_putmessage2(void)
{
	ft_puterror();
	ft_putstr("\n>> Unknown error regarding the argument count, sorry.\n\nowo'\n");
}

void	ft_putmessage3(void)
{
	ft_puterror();
	ft_putstr("\n>> To use the program, the number has to be an unsigned integer.\n\nuwu\n");
}
