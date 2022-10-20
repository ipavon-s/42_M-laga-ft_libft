/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:22:14 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/14 12:59:00 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	i;

	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if (dstsize <= s_dst)
		return (s_src + dstsize);
	i = s_dst;
	while (*src != '\0' && i < (dstsize - 1))
		*(dst + i++) = *src++;
	*(dst + i) = '\0';
	return (s_dst + s_src);
}
