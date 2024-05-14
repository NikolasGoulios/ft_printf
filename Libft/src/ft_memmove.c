/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:27:28 by ngoulios          #+#    #+#             */
/*   Updated: 2024/04/29 11:35:18 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*src_t;
	char		*dest_t;
	size_t		index;

	dest_t = (char *)dest;
	src_t = (const char *)src;
	index = 0;
	if (!dest && !src)
		return (dest);
	if (dest_t > src_t && dest_t < (src_t + len))
	{
		while (len-- > 0)
			dest_t[len] = src_t[len];
	}
	else
	{
		while (index < len)
		{
			dest_t[index] = src_t[index];
			index++;
		}
	}
	return (dest);
}
