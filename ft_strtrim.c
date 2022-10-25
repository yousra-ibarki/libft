/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 00:48:06 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 15:12:06 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_mystrcpy(const char *src, char *dst, size_t s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[s];
		s++;
		i++;
	}
	dst[s] = '\0';
	return (dst);
}

static int	ft_search(char const *s, char c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
			return (1);
		len--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	end;
	size_t	start;

	start = 0;
	if (!s1)
		return (0);
	else if (!set)
	{
		out = malloc(sizeof(char) * (ft_strlen(s1) + 1));
		if(!out)
			return (NULL);
		ft_mystrcpy(s1, out, 0, ft_strlen(s1));
		return (out);
	}
	end = ft_strlen(s1);
	while (s1[start])
	{
		if (!(ft_search(set, s1[start])))
			break ;
		start++;
	}
	while (s1[end - 1])
	{
		if (!(ft_search(set, s1[end]) && start < end))
			break ;
		end--;
	}
	out = malloc(sizeof(char) * (end - start + 1));
	if (!out)
		return (0);
	ft_mystrcpy(s1, out, start, end - start + 1);
	return (out);
}
int main()
{
    // int i = 0;
    char s1[] = "aabababababbababababab";
    char set[] = "aa";
    printf("%s", ft_strtrim(s1, set));
}
