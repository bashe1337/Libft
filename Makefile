# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bashe <bashe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 15:19:13 by bashe             #+#    #+#              #
#    Updated: 2019/09/12 21:40:14 by bashe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c\
	   ft_strdup.c\
	   ft_strcpy.c\
	   ft_strncpy.c\
	   ft_strcat.c\
	   ft_strncat.c\
	   ft_atoi.c\
	   ft_memset.c\
	   ft_memcpy.c\
	   ft_bzero.c\
	   ft_memccpy.c\
	   ft_memmove.c\
	   ft_memchr.c\
	   ft_memcmp.c

SRCSO = ft_strlen.o\
		ft_strdup.o\
		ft_strcpy.o\
		ft_strncpy.o\
		ft_strcat.o\
		ft_strncat.o\
		ft_atoi.o\
		libft.h.gch\
		ft_memset.o\
		ft_memcpy.o\
		ft_bzero.o\
		ft_memccpy.o\
		ft_memmove.o\
		ft_memchr.o\
		ft_memcmp.o

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
