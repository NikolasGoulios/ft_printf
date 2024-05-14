/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 11:51:49 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/14 11:51:50 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *, ...)
{
	int			count;
	const char	s;
	const char	c;

	count = 0;
	c = "%";
	while (!s && s != c)
	{
		write(1, s, 1);
		s++;
	}
	if (s == c)
	{
		++s;
		if (s[s] == "c")
		{
			ft_putchar(va_arg);
		}
		else if (s[s] == "s")
		{
			ft_putstr(va_arg);
		}
		if (s[s] == "p")
		{

		}
		if (s[s] == "i")
		{
			ft_putnbr(va_arg);
		}
		if (s[s] == "u")
		{

		}
		if (s[s] == "x")
		{

		}
		if (s[s] == "X")
		{

		}
		if (s[s] == c)
		{
			ft_putchar("%");
		}
		

	}

}


