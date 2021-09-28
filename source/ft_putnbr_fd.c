/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 20:34:45 by ssantiag          #+#    #+#             */
/*   Updated: 2021/05/04 20:34:45 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	int		index;

	if (n < 0)
		ft_putchar_fd('-', fd);
	index = sizeof(buffer);
	while (1)
	{
		if (n < 0)
			buffer[--index] = '0' - (n % 10);
		else
			buffer[--index] = '0' + (n % 10);
		n = n / 10;
		if (n == 0)
			break ;
	}
	write(fd, &buffer[index], sizeof(buffer) - index);
}
