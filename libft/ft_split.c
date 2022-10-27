/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:04:14 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/27 20:01:11 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	count = 0;
	i = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (count);
}

//señala el comienzo de la palabra
static int	ft_start(const char *s, char c, int k)
{
	while (s[k] != '\0')
	{
		if (s[k] != c)
			return (k);
		k++;
	}
	return (0);
}

//señala el final de la palabra
static int	ft_end(const char *s, char c, int k)
{
	while (s[k] != '\0')
	{
		if (s[k] == c || s[k] == '\0')
			return (k - 1);
		k++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		start;
	int		end;

	start = 0;
	end = 0;
	i = ft_count(s, c);
	str = (char **) malloc ((i + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] != '\0')
	{
		start = ft_start(s, c, start);
		end = ft_end(s, c, start);
		str[i] = ft_substr(s, start, (end - start));
		write (1, "\n", 1);
		start = end + 1;
		i++;
	}
	str[i] = (char *) '\0';
	return (str);
}
