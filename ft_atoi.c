/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:37:19 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 10:45:59 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	out;
	int					i;
	int					sign;

	out = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out *= 10;
		out += str[i] - '0';
		i++;
	}
	if (out < 9223372036854775807)
		return (out * sign);
	if (sign == -1)
		return (0);
	return (-1);
}

// int	main(void)
// {
// 	char str[] = "92233720368547758064";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d", atoi(str));

// 	return (0);
// }