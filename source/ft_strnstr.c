/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:01:04 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 14:01:04 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*ptr;
	size_t		offset;

	if (*little == '\0')
		return ((char *)big);
	ptr = big;
	while (ptr < big + len && *ptr != '\0')
	{
		offset = 0;
		while (ptr + offset < big + len && ptr[offset] != '\0')
		{
			if (ptr[offset] != little[offset])
				break ;
			if (little[++offset] == '\0')
				return ((char *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
