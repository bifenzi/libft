
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/19 14:33:22 by mbifenzi          #+#    #+#              #
#    Updated: 2019/11/05 15:47:48 by mbifenzi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_memccpy.c ft_memset.c ft_split.c ft_strlcpy.c ft_strrchr.c \
ft_atoi.c ft_isascii.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlen.c ft_strtrim.c \
ft_bzero.c ft_isdigit.c	ft_memcmp.c	ft_putendl_fd.c	ft_strdup.c	ft_strmapi.c ft_substr.c \
ft_calloc.c	ft_isprint.c ft_memcpy.c ft_putnbr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c \
ft_isalnum.c ft_itoa.c ft_memmove.c	ft_putstr_fd.c ft_strlcat.c	ft_strnstr.c ft_toupper.c \

OBJECT = *.o

NAME = libft.a

all : $(NAME)

$(NAME) :
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

bonus : 
	@echo "hello world"

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

re : fclean all

