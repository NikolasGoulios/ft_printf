/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:04:24 by ngoulios          #+#    #+#             */
/*   Updated: 2024/04/25 16:04:27 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;
	size_t			total;

	i = 0;
	total = count * size;
	if (total > 0 && size > 0 && total >= (18446744073709551615UL) / size)
		return (NULL);
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	while (i < total)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}
