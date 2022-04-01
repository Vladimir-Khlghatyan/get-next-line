/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:46:03 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/26 21:35:17 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t	ft_strlen(const char *str);
char	*ft_strjoin_upd(char *s1, char const *s2);
char	*ft_strchr_upd(const char *s, int c);
char	*ft_copy(char *s1, char *s2);
char	*read_from_file(int fd, char *temp);
char	*upto_first_nl_or_0(char *str);
char	*after_nl(char *str);
char	*get_next_line(int fd);

#endif
