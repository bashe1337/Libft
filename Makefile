# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bashe <bashe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 15:19:13 by bashe             #+#    #+#              #
#    Updated: 2019/12/08 18:30:21 by bashe            ###   ########.fr        #
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
		ft_strnstr.c\
		ft_strncmp.c\
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
		ft_putnbr.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_itoa.c\
		ft_strsplit.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_secondcmp.c\
		ft_sqr.c\
		ft_factorial.c\
		ft_sqrt.c\
		ft_lstmap.c\
		ft_sizencount.c\
		ft_wordcounter.c\
		ft_wl.c\
		ft_iswspace.c\
		ft_printsize.c\
		get_next_line.c\
		ft_strjoinfree.c
		

SRCSO = ft_atoi.o\
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
		ft_strncmp.o\
		ft_strstr.o\
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
		ft_putnbr.o\
		ft_memalloc.o\
		ft_memdel.o\
		ft_strnew.o\
		ft_strdel.o\
		ft_strclr.o\
		ft_striter.o\
		ft_striteri.o\
		ft_strmap.o\
		ft_strmapi.o\
		ft_strequ.o\
		ft_strnequ.o\
		ft_strsub.o\
		ft_strjoin.o\
		ft_strtrim.o\
		ft_putchar_fd.o\
		ft_putstr_fd.o\
		ft_putendl_fd.o\
		ft_putnbr_fd.o\
		ft_itoa.o\
		ft_strsplit.o\
		ft_lstnew.o\
		ft_lstdelone.o\
		ft_lstdel.o\
		ft_lstadd.o\
		ft_lstiter.o\
		ft_secondcmp.o\
		ft_sqr.o\
		ft_factorial.o\
		ft_sqrt.o\
		ft_lstmap.o\
		ft_sizencount.o\
		ft_wordcounter.o\
		ft_wl.o\
		ft_iswspace.o\
		ft_printsize.o\
		get_next_line.o\
		ft_strjoinfree.o
		

INC = libft.h

DELONE = libft.h.gch

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME): $(SRCSO)
	ar rc $(NAME) $(SRCSO)
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAGS) -c $(SRCS) $(INC)

clean:
	@/bin/rm -f $(SRCSO) $(DELONE)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
