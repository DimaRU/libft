/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 17:34:24 by ssantiag          #+#    #+#             */
/*   Updated: 2021/04/24 17:34:24 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *source, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(source);
	dstlen = 0;
	while (dstlen < size && dst[dstlen] != '\0')
		dstlen++;
	if (dstlen != size)
	{
		if (size - dstlen > srclen)
			ft_memcpy(dst + dstlen, source, srclen + 1);
		else
		{
			ft_memcpy(dst + dstlen, source, size - dstlen - 1);
			dst[size - 1] = '\0';
		}
	}
	return (dstlen + srclen);
}
