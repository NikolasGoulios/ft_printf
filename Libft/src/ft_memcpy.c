/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:10:00 by ngoulios          #+#    #+#             */
/*   Updated: 2024/04/19 10:44:56 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		index;
	char		*de;
	char		*sr;

	index = 0;
	de = (char *)dst;
	sr = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (index < n)
	{
		de[index] = sr[index];
		index++;
	}
	return (dst);
}
