/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:04:14 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/11/01 12:30:16 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//cuenta el numero de palabras
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
static int	ft_start(char const *s, char c, int k)
{
	while (s[k] != '\0')
	{
		if (s[k] != c)
			return (k);
		k++;
	}
	return (k);
}

//señala el final de la palabra
static int	ft_end(char const *s, char c, int k)
{
	while (s[k] != '\0')
	{
		if (s[k] == c)
			return (k);
		k++;
	}
	return (k);
}

//creación de palabras
static char	*ft_create(char const *s, int i, int e)
{
	char	*word;
	int		len;
	int		p;

	len = e - i;
	word = (char *) malloc ((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	p = 0;
	while (i < e)
	{
		word[p] = s[i];
		i++;
		p++;
	}
	word[p] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		start;
	int		end;
	int		k;

	start = 0;
	end = 0;
	if (c == '\0')
		return ((char **) malloc (1 * sizeof(char *)));
	i = ft_count(s, c);
	str = (char **) malloc ((i + 1) * sizeof(char *));
	if (!s || !str)
		return (NULL);
	k = 0;
	while (i--)
	{
		start = ft_start(s, c, start);
		end = ft_end(s, c, start);
		str[k] = ft_create(s, start, end);
		start = end;
		k++;
	}
	str[i] = NULL;
	return (str);
}

/* int main (void)
{
	char	*s;
	char	**array;

	s = "";
	array = ft_split(s, 'z');
	printf ("%s", array[0]);
	printf ("  ");
	printf ("%c", array[0][4]);
	return (0);
} */
 