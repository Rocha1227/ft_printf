# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krocha <krocha@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 12:41:35 by krocha            #+#    #+#              #
#    Updated: 2023/05/15 14:42:32 by krocha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isdigit.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_atoi.c ft_isprint.c ft_memmove.c \
ft_strchr.c ft_strmapi.c ft_toupper.c ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_strncmp.c ft_calloc.c ft_putchar_fd.c \
ft_striteri.c ft_strnstr.c ft_isalnum.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_putnbr_fd.c \
ft_strlcat.c ft_strtrim.c ft_isascii.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c
SRC.BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstmap.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c
NAME = libft.a
OBJS = $(SRCS:%.c=%.o)
BONUS_OBJS = $(SRC.BONUS:%.c=%.o)
all:$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS) 

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
