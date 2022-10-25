/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:54:28 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 10:54:06 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}

/*int main()
{
	printf("%d\n", ft_isascii(-1));
	printf("%d", isascii(-1));
}*/
