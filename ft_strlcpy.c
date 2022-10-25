/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:57:35 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 14:23:05 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	lens;

	i = 0;
	lens = ft_strlen(src);
	if (dstsize == 0)
		return (lens);
	else
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (lens);
	}
}
/*int main()
{
	char d[] = "hello";
	char s[] = "wd";
	printf("%zu\n", ft_strlcpy(d, s, 3));
	printf("%lu", strlcpy(d, s, 3));
}*/