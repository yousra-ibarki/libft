/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:31:49 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 14:44:50 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lens;

	lens = strlen(s);
	while (s[lens] || s[lens] == '\0')
	{
		if (s[lens] == c)
			return ((char *)s + lens);
		lens--;
	}
	return (0);
}
/*int main()
{
	char s[] = "helloee";
	printf("%s\n", ft_strrchr(s, 'e'));
	printf("%s", strrchr(s, 'e'));
}*/
