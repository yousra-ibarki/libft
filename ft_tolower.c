/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:30:19 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/16 15:30:43 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_tolower(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if (a > 64 && a < 91)
	return (a += 32);
	else
	return (c);
}
int main()
{
	printf("%d", ft_tolower('B'));
}
