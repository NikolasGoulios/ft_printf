/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:40:23 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/20 11:27:38 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	int	temp;
	int	count;

	temp = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n) 
	{
		temp = n % 16;
		if (temp < 9)
			temp = temp + '0';
		if (n >= 16)
        count = ft_puthexa(n / 16, format);
        if (count == -1)
            return -1;
		else if (format == 'x')
			temp = temp + 'a' - 10;
		else if (format == 'X')
			temp = temp + 'A' - 10;
		if (write(1, &temp, 1) == -1)
			return (-1);
		count++;
	}
	
	return (count);
}
