# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bashe <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 15:19:13 by bashe             #+#    #+#              #
#    Updated: 2019/09/07 19:37:54 by bashe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c\
	   ft_strdup.c\
	   ft_strcpy.c\
	   ft_strncpy.c\
	   ft_strcat.c\
	   ft_strncat.c

SRCSO = ft_strlen.o\
		ft_strdup.o\
		ft_strcpy.o\
		ft_strncpy.o\
		ft_strcat.o\
		ft_strncat.o

INC = libft.h

FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRCS) $(INC)
	@ar rc $(NAME) $(SRCSO)
	@ranlib $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
