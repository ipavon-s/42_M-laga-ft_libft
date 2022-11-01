/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:58:09 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/28 16:18:11 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Borra una cadena (set) de la cadena principal (s1)*/
int	flag(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		k;
	int		s;

	k = ft_strlen(s1);
	i = 0;
	s = 0;
	while (flag(set, s1[i]) && s1[i])
		i++;
	while (flag(set, s1[k - 1]))
		k--;
	if (k < i)
		k = i;
	str = (char *) malloc ((k - i +1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < k)
		str[s++] = s1[i++];
	str[s] = '\0';
	return (str);
}
