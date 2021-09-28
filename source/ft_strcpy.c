/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:33:53 by ssantiag          #+#    #+#             */
/*   Updated: 2021/01/22 20:33:53 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_pointer;

	dest_pointer = dest;
	while (1)
	{
		*dest_pointer++ = *src;
		if (*src++ == '\0')
			break ;
	}
	return (dest);
}
