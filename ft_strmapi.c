/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:47:40 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 14:32:08 by yoibarki         ###   ########.fr       */
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

static char	*ft_strdup(const char *s1)
{
	int len;
	char *arr;

	len = ft_strlen(s1);
	arr = malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
		return (NULL);
	ft_strcpy(arr, s1);
	return (arr);
}

/*static char	make_change(unsigned int i, char l)
{
	if (l == 'h' && i == 0)
		return 'X';
	return (l);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!s || !f)
		ft_strdup("");
	else if(!f)
		ft_strdup(s);
	ptr = ft_strdup(s);
	if (!ptr)
		return (ptr = NULL);
	while (s[i])
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	return (ptr);
}

/*int main()
{
	int i = 0;
	char arr[] = "hello";
	printf("%s", ft_strmapi(arr, make_change));
}*/
