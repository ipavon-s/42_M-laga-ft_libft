/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:37:08 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/24 14:30:48 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
		n = n * -1;
	while (n >= 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		dig;

	dig = ft_digit(n);
	str = (char *) malloc ((dig + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[dig + 1] = '\0';
	if (n < 0)
		str[0] = '-';
	while (n > 0)
	{
		str[dig--] = n % 10;
		n = n / 10;
	}
	return (str);
}
