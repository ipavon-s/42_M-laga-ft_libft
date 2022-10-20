/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:53:41 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/14 12:58:12 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c1;

	str = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n--)
	{
		if (*str == c1)
			return (str);
		str++;
	}
	return (NULL);
}
