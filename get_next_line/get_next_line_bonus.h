/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:03:09 by salaoui           #+#    #+#             */
/*   Updated: 2024/01/11 13:36:43 by salaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# define OPEN_MAX 10240
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *line_saved, char *tmp);
char	*save_line(char *s);
char	*save_next_line(char *str);
int		ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *src);

#endif
