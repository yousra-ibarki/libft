/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:31:04 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 12:03:54 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *) s + i);
		}
		i++;
	}
	if (s[i] == '\0')
		return ((char *) s + i);
	return (0);
}
/*int main()
{
	char tab[] = "hello";

	printf("%s\n", ft_strchr(tab, 'e'));
   printf("%s", strchr(tab, 'e'));
	return 0;
}*/
