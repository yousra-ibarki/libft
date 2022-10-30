/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:58:17 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/18 00:58:23 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	fill(char const *s, char **ss, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
	while (s[k])
	{
		if (s[k] != c && s[k] != 0)
		{
			ss[i][j] = s[k];
			j++;
		}
		else if (s[k - 1] != c && k > 0)
		{
			ss[i][j] = '\0';
			i++;
			j = 0;
		}
		else if (s[k + 1] == '\0' && s[k] != c)
			ss[i][j] = '\0';
		k++;
	}
	return (**ss);
}

static int	countrow(char const *s, char ch)
{
	int	c;
	int	i;
	int	l;

	c = 0;
	i = 0;
	l = 0;
	while (s[i])
	{
		while (s[i] != ch && s[i])
		{
			c = 1;
			i++;
		}
		while (s[i] == ch)
			i++;
		l += c;
	}
	return (l);
}

static char	**backslash(char const *s, char **ss)
{
	ss = malloc(2 * sizeof(char *));
	ss[0] = ft_strdup(s);
	ss[1] = NULL;
	return (ss);
}

void	freethearr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		column;
	char	**ss;
	int		row;

	i = 0;
	j = 0;
	column = 0;
	row = 0;
	if (s == NULL)
		return (0);
	else if (c == '\0')
		return (backslash(s, ss));
	row = countrow(s, c);
	ss = malloc(sizeof(char *) * (row + 1));
	if (!ss)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			column++;
		else
		{
			ss[j] = malloc(sizeof(char) * (column + 1));
			if (!ss[j])
			{
				freethearr(ss);
				return (NULL);
			}
			column = 0;
			j++;
		}
		i++;
	}
	ss[j] = malloc(sizeof(char) * (column + 1));
	if (!ss[j])
	{
		freethearr(ss);
		return (NULL);
	}
	ss[j + 1] = 0;
	fill(s, ss, c);
	return (ss);
}
// int	main(void)
// {
// 	char arr[] = "hello guys it's such a wonderful day";
// 	char c = ' ';
// 	char s = ft_split(arr, c);
// 	printf("%s\n", (char *)ft_split(0, ' '));
// 	for (int i = 0; i < 7; i++)
// 	{
// 		printf("%s\n", s[i]);
// 	}
// }