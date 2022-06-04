/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jhtohru@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:43:11 by jmenezes          #+#    #+#             */
/*   Updated: 2022/06/01 10:04:33 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# include <string.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *m, int c, size_t n);

void	ft_bzero(void *m, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		toupper(int c);

int		tolower(int c);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

int		ft_strncmp(const char *str1, const char *str2, size_t n);



void	*ft_memchr(const void *s, int c, size_t n);

/*******************************************************************************

DESCRIPTION

The memchr function locates the first occurrence of c (converted to an unsigned
char) in the initial n characters (each interpreted as unsigned char) of the
object pointed to by s. The implementation shall behave as if it reads the
characters sequentially and stops as soon as a matching character is found.


RETURNS

The memchr function returns a pointer to the located character, or a null
pointer if the character does not occur in the object.

*******************************************************************************/



int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

int		ft_atoi(const char *nptr);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strdup(const char *str);

char	*ft_substr(char const *str, unsigned int start, size_t len);

char	*ft_strjoin(const char *str1, const char *str2);

char	*ft_strtrim(const char *str, const char *set);

char	**ft_split(const char *str, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char));

void	ft_striteri(char *str, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *str, int fd);

void	ft_putendl_fd(char *str, int fd);

void	ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif
