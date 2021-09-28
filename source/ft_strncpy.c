/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssantiag <ssantiag@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:41:37 by ssantiag          #+#    #+#             */
/*   Updated: 2021/01/22 20:41:37 by ssantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_pointer;

	dest_pointer = dest;
	while (n-- != 0)
	{
		*dest++ = *src;
		if (*src++ == '\0')
		{
			dest_pointer = dest;
			while (n-- != 0)
				*dest_pointer++ = '\0';
			return (dest);
		}
	}
	return (dest);
}
