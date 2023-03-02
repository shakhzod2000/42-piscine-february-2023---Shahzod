/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declarations.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonleidi <jonleidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:58:43 by jonleidi          #+#    #+#             */
/*   Updated: 2023/02/26 21:33:53 by jonleidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	__FT_DECLARATIONS_H__
#	define	__FT_DECLARATIONS_H__

	void	ft_checkargcwrong(int argc);
	void	ft_checkargctwo(int argc, char *str);
	void	ft_checkargcthree(int argc, char *str1, char *str2);
	void	ft_unknownerror(int argc);
	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	void	ft_puterror(void);
	void	ft_putsecret(void);
	void	ft_putmessage1(void);
	void	ft_putmessage2(void);
	void	ft_putmessage3(void);
	int		ft_checkunsigned(char *str);
	int		ft_checkdictname(char *str);
	void	ft_dictnotfound(void);

#endif
