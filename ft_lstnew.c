/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 10:51:32 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/30 10:51:39 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	if (!ptr)
		return (0);
	ptr->next = 0;
	ptr->content = content;
	return (ptr);
}
// struct s_list	*next = 0;
// struct s_list	*content = malloc(sizeof(struct s_list));
int main()
{
	int *content;
	ptintf(ft_lstnew(&content));
}