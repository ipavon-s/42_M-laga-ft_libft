/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipavon-s <ipavon-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:04:14 by ipavon-s          #+#    #+#             */
/*   Updated: 2022/10/20 18:54:55 by ipavon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//contador de coincidencias
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

static int	ft_start(const char *s, char c, int i)
{
	int			flag;

	flag = i;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			return (i);
			flag = 1;
		}
		if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (0);
}

static int	ft_sublen(const char *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[i])
	{
		
	}
}

static char	*ft_create(const char *s, char c, int k)
{
	int		start;
	int		len;
	char	*str;
	int		flag;

	start = 0;
	len = 0;
	flag = k;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			return (i);
			flag = 1;
		}
		if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	//start = ft_start(*s, c, start);
	len = ft_sublen(*s, c, start);
	str = ft_substr(*s, start, len);
	return (*str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		k;

	n = 0;
	k = 0;
	i = ft_count(*s, c);
	str = (char **) malloc ((i + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[k] = ft_create(*s, c, k);
		//usar la k como flag para marcar el inicio de substr
		k++;
	}
	return (**str);
}
