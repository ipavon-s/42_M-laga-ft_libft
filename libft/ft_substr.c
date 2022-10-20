/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:32:38 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/19 15:33:08 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*saca una cadena de x caracteres(len) desde un caracter de inicio(start) 
de la cadena que le pasemos (s) y devuelve la sub cadena (str).*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;
	int		k;

	k = 0;
	i = 0;
	str = (char *) malloc (len * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != (char)start && s[i])
		i++;
	while (len--)
	{
		str[k] = s[i++];
		i++;
		k++;
	}
	return (str);
}
