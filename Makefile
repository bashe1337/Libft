# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bashe <bashe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 15:19:13 by bashe             #+#    #+#              #
#    Updated: 2019/09/10 19:06:23 by bashe            ###   ########.fr        #
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
	   ft_memset.c

SRCSO = ft_strlen.o\
		ft_strdup.o\
		ft_strcpy.o\
		ft_strncpy.o\
		ft_strcat.o\
		ft_strncat.o\
		ft_atoi.o\
		libft.h.gch\
		ft_memset.o

INC = libft.h

FLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRCS) $(INC)
	@ar rc $(NAME) $(SRCSO)
	@ranlib $(NAME)

clean:
	/bin/rm -f $(SRCSO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean clean all
