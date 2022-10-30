/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:46:03 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/16 15:46:53 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(const char *src, char *dst, size_t s, size_t len)
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len1;

	if (!s)
		return (NULL);
	len1 = strlen(s);
	if (len > len1)
	{
		sub = malloc(sizeof(char) * (len1 + 1));
		if (!sub)
			return (NULL);
		ft_strcpy(s, sub, start, len1);
	}
	else
	{
		if ((size_t)start > strlen(s))
			return (0);
		sub = malloc(sizeof(char) * (len + 1));
		if (!sub)
			return (NULL);
		ft_strcpy(s, sub, start, len);
	}
	return (sub);
}
