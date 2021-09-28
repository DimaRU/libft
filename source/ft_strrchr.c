/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:17:41 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 12:17:41 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*endptr;

	endptr = (char *)s + ft_strlen(s) + 1;
	while (endptr != s)
	{
		if (*(--endptr) == (char)c)
			return (endptr);
	}
	return (NULL);
}
