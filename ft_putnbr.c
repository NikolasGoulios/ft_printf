/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 09:49:30 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/18 13:15:40 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
		count =+ ft_putstr("-2147483648");
	else if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
		count += ft_putnbr(n);
	}
	else if (n > 9)
		{
			count += ft_putnbr(n / 10);
			if (count == -1)
				return (-1);
			count += ft_putchar(n % 10 + 48);
		}
		else
			count += ft_putchar(n + 48);
	if (count == -1)
		return (-1);
	return (count);
}