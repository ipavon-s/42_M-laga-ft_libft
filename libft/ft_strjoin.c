/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:51:25 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/19 11:12:13 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*une dos cadenas en una con terminacion null*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*str;
	int		i;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *) malloc ((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (len1--)
	{
		str[i] = s1[i];
		i++;
	}
	len1 = i;
	i = 0;
	while (len2--)
	{
		str[i + len1] = s2[i];
		i++;
	}
	str[i + len1] = '\0';
	return (str);
}
