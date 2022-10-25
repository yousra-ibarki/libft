/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:55:11 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 10:56:23 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	a;

	a = (unsigned char) c;
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}
/*int main()
{
	printf("%d\n", ft_isprint(127));
	printf("%d", isprint(127));
}*/
