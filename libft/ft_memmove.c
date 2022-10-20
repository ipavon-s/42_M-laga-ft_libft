/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:52:15 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/14 12:58:26 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s_dst;
	char	*s_src;

	s_dst = (char *)dst;
	s_src = (char *)src;
	if (s_dst > s_src && (s_src + len) > s_dst)
	{
		s_dst = s_dst + (len -1);
		s_src = s_src + (len -1);
		while (len--)
			*s_dst-- = *s_src--;
	}
	else
	{
		while (len--)
			*s_dst++ = *s_src++;
	}
	return (dst);
}
