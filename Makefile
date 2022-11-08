# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 18:19:23 by yoibarki          #+#    #+#              #
#    Updated: 2022/10/25 18:19:31 by yoibarki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_atoi.c\
		ft_isalpha.c\
		ft_isalpha.c\
		ft_isalpha.c\
		ft_itoa.c\
		ft_itoa.c\
		ft_itoa.c\
		ft_memmove.c\
		ft_memmove.c\
		ft_memmove.c\
		ft_putnbr_fd.c\
		ft_putnbr_fd.c\
		ft_putnbr_fd.c\
		ft_strdup.c\
		ft_strlcpy.c\
		ft_strnstr.c\
		ft_tolower.c\
		ft_bzero.c\
		ft_isascii.c\
		ft_memchr.c\
		ft_memset.c\
		ft_putstr_fd.c\
		ft_striteri.c\
		ft_strlen.c\
		ft_strrchr.c\
		ft_toupper.c\
		ft_calloc.c\
		ft_isdigit.c\
		ft_memcmp.c\
		ft_putchar_fd.c\
		ft_split.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_isalnum.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_putendl_fd.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strncmp.c\
		ft_substr.c \
		ft_strmapi.c 
OBJS = $(SRCS:%.c=%.o)
CC=cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar -rcs

all: $(NAME)

$(NAME):$(OBJS) libft.h
	$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h 
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all
