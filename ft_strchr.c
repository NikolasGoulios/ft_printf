/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoulios <ngoulios@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:35:08 by ngoulios          #+#    #+#             */
/*   Updated: 2024/05/17 10:35:10 by ngoulios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	lc ;

	lc = (unsigned char)c;
	while (*s)
	{
		if (*s == lc)
			return ((char *) s);
		s++;
	}
	if (lc == '\0')
		return ((char *) s);
	return (0);
}
