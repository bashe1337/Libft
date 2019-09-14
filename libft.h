/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bashe <bashe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:07:57 by bashe             #+#    #+#             */
/*   Updated: 2019/09/14 22:48:41 by bashe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void		*ft_memset(void *destination, int c, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *dst, const char *app);
char		*ft_strncat(char *dst, const char *app, size_t len);
int			ft_atoi(const char *str);
void		*ft_memset(void *destination, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
char		*ft_strdup(const char *src);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *src, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *str1, const char *str2, size_t len);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		ft_putchar(char c);
void		ft_putstr(char const *s);
//ft_memalloc
//ft_memdel
//ft_strnew
//ft_strdel
//ft_strclr
//ft_striter
//ft_striteri
//ft_strmap
//ft_strmapi
//ft_strequ
//ft_strnequ
//ft_strsub
//ft_strsjoin
//ft_strtrim
//ft_strsplit
//ft_itoa
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
//ft_putchar_fd
//ft_putstr_fd
//ft_putendl_fd
//ft_putnbr_fd

#endif
