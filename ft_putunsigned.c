/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:44:11 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/18 13:11:13 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsigned(unsigned int n)
{
	if (n > 9)
		{
			count += ft_putunsigned(n / 10);
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
