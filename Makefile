# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/23 10:07:39 by dborgard          #+#    #+#              #
#    Updated: 2021/12/23 14:43:12 by dborgard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	ft_printf.c ft_putchar_fd.c ft_puthex_fd.c ft_putlongnbr_fd.c \
				ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc
CC_FLAGS	=	-Wall -Werror -Wextra

all:			$(NAME)

$(NAME):		$(OBJS) ft_printf.h
				ar -crs $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)

fclean:
				rm -f $(NAME)

re:
				fclean all

test:			main.c $(NAME) ft_printf.h
				$(CC) main.c $(NAME) -o test