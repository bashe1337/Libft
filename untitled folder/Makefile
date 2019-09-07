# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bashe <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 15:19:13 by bashe             #+#    #+#              #
#    Updated: 2019/09/07 15:54:53 by bashe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c

SRCSO = ft_strlen.o

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
