/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:41:27 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/19 21:41:27 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef unsigned char	t_uchar;

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_uchar			*dest;
	const t_uchar	*source;

	dest = dst;
	source = src;
	while (n-- != 0)
	{
		*dest++ = *source;
		if (*source++ == (t_uchar)c)
			return (dest);
	}
	return (NULL);
}
