/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:20:13 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 19:20:13 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		sign;
	char	*ptr;
	char	*rezult;
	char	buffer[12];

	sign = 1;
	if (n < 0)
		sign = -sign;
	ptr = buffer + sizeof(buffer);
	*(--ptr) = '\0';
	while (1)
	{
		*(--ptr) = (sign * (n % 10)) + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	if (sign < 0)
		*(--ptr) = '-';
	rezult = malloc(buffer + sizeof(buffer) - ptr);
	if (rezult != NULL)
		ft_memcpy(rezult, ptr, buffer + sizeof(buffer) - ptr);
	return (rezult);
}
