/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:35:06 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 11:11:33 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ss;

	i = 0;
	ss = (unsigned char *) s;
	while (i < n)
	{
		if (ss[i] == c)
			return ((unsigned char *)(s + i));
		else if (ss[i] == '\0')
			return (NULL);
		i++;
	}
	return (0);
}
/*int main()
{
	char tab[] = "lelho";
	printf("%s\n", ft_memchr(tab, 'h', 3));
	printf("%s", memchr(tab, 'h', 3));
	return 0;
}*/
