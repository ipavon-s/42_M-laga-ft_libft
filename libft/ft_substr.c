/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:32:38 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/28 13:28:47 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*saca una cadena de x caracteres(len) desde un caracter de inicio(start) 
de la cadena que le pasemos (s) y devuelve la sub cadena (str).*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;
	unsigned int		k;

	k = 0;
	i = ft_strlen(s);
	if ((size_t)start > i || !s)
		return (ft_strdup(""));
	if (len > (i - start))
		len = i - start;
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (k < len && s[k])
	{
		str[k] = s[k + start];
		k++;
	}
	str[k] = '\0';
	return (str);
}
