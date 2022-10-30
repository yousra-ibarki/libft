/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:36:39 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 14:42:34 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*rephay;

	i = 0;
	j = 0;
	rephay = (char *)haystack;
	if (*needle == '\0')
		return (rephay);
	while (i < len && haystack[i])
	{
		while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j] && i
			+ j < len)
			j++;
		if (needle[j] == '\0')
			return (rephay + i);
		i++;
	}
	return (0);
}
