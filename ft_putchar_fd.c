/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:12:01 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 11:19:15 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main()
{
	int fd = open("/Users/yoibarki/Desktop/libft/hello", 777);
	char v = 'a';
	printf("%d\n",fd);
	//ft_putchar_fd(v, fd);
	int ffd = open("/Users/yoibarki/Desktop/libft/hello1", O_CREAT, 0777);
	char c = 'a';
	printf("%d",ffd);
	ft_putchar_fd(c, ffd);
	//close(fd);
}*/
