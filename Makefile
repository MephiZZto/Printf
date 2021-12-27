# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dborgard <dborgard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/23 10:07:39 by dborgard          #+#    #+#              #
#    Updated: 2021/12/27 09:22:30 by dborgard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRCS		=	ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
				ft_putstr.c ft_strlen.c ft_numlen.c ft_puthexad.c

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