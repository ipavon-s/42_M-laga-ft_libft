/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:59:21 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/19 13:14:31 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*encuentra un caracter en la cadena y devuelve un puntero a la 
posicion de memoria de la cadena donde esta el caracter*/

char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = (char)c;
	while (*s != '\0')
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	if (x == '\0')
		return ((char *)s);
	return (NULL);
}
