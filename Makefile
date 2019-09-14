# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bashe <bashe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 15:19:13 by bashe             #+#    #+#              #
#    Updated: 2019/09/14 22:48:39 by bashe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_atoi.c\
		ft_bzero.c\
	 	ft_strlen.c\
	   	ft_strdup.c\
	   	ft_strcpy.c\
	   	ft_strncpy.c\
	   	ft_strcat.c\
	   	ft_strncat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strcmp.c\
		ft_strstr.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strlcat.c\
		ft_memset.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c

SRCSO = ft_atoi.o\
		libft.h.gch\
		ft_bzero.o\
		ft_strlen.o\
		ft_strdup.o\
		ft_strcpy.o\
		ft_strncpy.o\
		ft_strcat.o\
		ft_strncat.o\
		ft_strchr.o\
		ft_strrchr.o\
		ft_strcmp.o\
		ft_strstr.o\
		ft_strncmp.o\
		ft_strnstr.o\
		ft_strlcat.o\
		ft_memset.o\
		ft_memcpy.o\
		ft_memccpy.o\
		ft_memmove.o\
		ft_memchr.o\
		ft_memcmp.o\
		ft_isalpha.o\
		ft_isdigit.o\
		ft_isalnum.o\
		ft_isascii.o\
		ft_isprint.o\
		ft_toupper.o\
		ft_tolower.o\
		ft_putchar.o\
		ft_putstr.o\
		ft_putendl.o\
		ft_putnbr.o

INC = libft.h

FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	
	@gcc $(FLAGS) $(SRCS) $(INC)
	@ar rc $(NAME) $(SRCSO)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(SRCSO)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
