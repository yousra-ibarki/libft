/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:58:23 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/16 15:58:25 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int	ft_toupper(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if (a > 96 && a < 123)
	return (a -= 32);
	else
	return (c);
}
int main()
{
	printf("%d", ft_toupper('a'));
}
