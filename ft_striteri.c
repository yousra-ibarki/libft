/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:24:25 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 12:21:48 by yoibarki         ###   ########.fr       */
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

static char	*ft_mystrdup(const char *s1)
{
	int		len;
	char	arr;

	len = strlen(s1);
	arr = malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);
	ft_strcpy(arr, s1);
	return (arr);
}

static void	make_change(unsigned int i, char *s)
{
	while (s[i])
	{
		s[i] = 48;
		i++;
	}
}

static void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!s)
		s = NULL;
	while (*s)
	{
		(*f)(i, s);
		s++;
	}
	s = ft_strdup(s);
}
/*int main()
{
    char s[] = "hello";
    ft_striteri(s, make_change);
    printf("%s", s);
}*/
//HANDLE THE FREE SHIT
