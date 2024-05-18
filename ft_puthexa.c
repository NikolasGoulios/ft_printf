/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:40:23 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/18 13:17:40 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	int temp;
	int count;

	temp = 0;
	count = 0;
	while (n)
	{
		temp = n % 16;
		if (temp < 10)
			temp = temp + '0';
		else if (format == 'x')
			temp = temp + 'a' - 10;
		else if (format == 'X')
			temp = temp + 'A' - 10;
		if (write(1, &temp, 1) == -1)
			return (-1);
		n = n / 16;
		count++;
	}
	return (count);
}
