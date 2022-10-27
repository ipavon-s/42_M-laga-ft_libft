/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:32:38 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/27 19:31:32 by ipavon-s         ###   ########.fr       */
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
	if (start > i)
		return ("");
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (len--)
	{
		str[k] = s[start];
		start++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
