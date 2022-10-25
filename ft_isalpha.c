/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:54:06 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 10:53:08 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_islower(unsigned char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

static int	ft_isupper(unsigned char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	unsigned char	a;

	a = (unsigned char) c;
	if (ft_isupper(a) || ft_islower(a))
		return (1);
	else
		return (0);
}

/*int main()
{
	unsigned char a = '[';
	printf("%d", ft_isalpha('6'));
	printf("%d", isalpha('6'));
}*/
