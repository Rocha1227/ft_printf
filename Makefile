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
ARCH = ar rcs
#target name
NAME = libftprintf.a
#libft library
LIBFT = ./libft
#convert all .c to .o
OBJS = $(SRCS:.c=.o)
SRCS = ft_printf.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putpointer.c ft_putstr.c
all:$(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	@echo "\033[92m Libft OK \033[0m"
	cp ./libft/libft.a $(NAME)
	@echo "\033[92m copy to libftprintf OK! \033[0m"
	$(ARCH) $(NAME) $(OBJS)
	@echo "\033[92m $(NAME) OK! \033[0m"


clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)
	@echo "\033[92m Clean OK \033[0m"

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)
	@echo "\033[92m Fclean OK \033[0m"
	
re: fclean all
