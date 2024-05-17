/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:40:23 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/17 10:40:25 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h" 

char *ft_puthexa(unsigned long n, char format)
{
	int index;
	int temp;
	char *pt;

	index = 0;
	temp = 0;
	while (n)
	{
		temp = n % 16;
		if (temp < 10)
			temp = temp + '0'
		else
			temp = temp + 'A' - 10;
		pt[i++] = temp;
		n = n / 16;
	}
	return (pt);
}