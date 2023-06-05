# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krocha <krocha@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 12:07:28 by krocha            #+#    #+#              #
#    Updated: 2023/06/05 15:32:19 by krocha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	cc
CFLAGS = -Wall -Wextra -Werror
#command to remove compiled files
RM = rm -rf
#command to create library from objects
ARCH = ar rc
#target name
NAME = libftprintf.a
#libft library
LIBFT = libft/libft.a
LIBFTDIR = libft
#source files
SRCS = ft_printf.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putpointer.c
#convert .c to .o
OBJS = $(SRCS:%.c=%.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFTDIR)
	@echo "Libft OK"
#	$(ARCH) $(NAME) $(OBJS)

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(MAKE) clean -c $(LIBFTDIR)
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -c $(LIBFTDIR)
	$(RM) $(NAME)

re: fclean all
