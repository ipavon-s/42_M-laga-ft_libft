/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:37:08 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/28 17:25:19 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_cnum(char *str, int n, int dig)
{
	long int	aux;

	aux = (long int) n;
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		aux = -aux;
	}
	while (aux > 0)
	{
		str[dig - 1] = (aux % 10) + 48;
		aux = aux / 10;
		dig--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			dig;
	int			i;
	long int	aux;

	aux = (long int) n;
	i = 0;
	dig = ft_digit(n);
	str = (char *) malloc ((dig + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[dig] = '\0';
	str = ft_cnum(str, n, dig);
	return (str);
}
