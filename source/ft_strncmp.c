/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 12:40:46 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/02 12:40:46 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	tmp;

	while (n-- != 0)
	{
		tmp = *(unsigned char *)s1++ - *(unsigned char *)s2++;
		if (tmp < 0)
			return (-1);
		else if (tmp > 0)
			return (1);
		if (s1[-1] == '\0')
			return (0);
	}
	return (0);
}
