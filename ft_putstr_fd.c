/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:57:18 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/24 07:57:52 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
    }
}
int main()
{
    char s[] = "hello";
    int fd = open(path, 777);
    ft_putstr_fd(s, fd);
}