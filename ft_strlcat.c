/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:57:05 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 14:15:35 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	i = 0;
	j = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(dst));
	else if (dstsize < strlen(src))
		return (ft_strlen(dst) + dstsize);
	if (dstsize > strlen(src))
	{
		while (src[i] && ft_strlen(dst) + i > dstsize)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
	}
	if (j + i > dstsize && j < dstsize)
		dst[j - 1] = '\0';
	else
		dst[j] = '\0';
	return (ft_strlen(dst) + strlen(src));
}
/*int main()
{
    char dst[] = "hello";
    char src[] = "world";
    printf("%ld", ft_strlcat(dst, src, 3));
    printf("%ld", strlcat(dst, src, 3));
    return 0;
}*/
