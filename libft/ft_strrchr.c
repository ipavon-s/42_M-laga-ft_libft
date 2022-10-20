/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:23:47 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/19 14:55:49 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	x;
	int		i;

	i = 0;
	x = (char)c;
	str = (char *) s;
	while (str[i] != '\n')
		i++;
	while (i >= 0)
	{
		if (str[i] == x)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
