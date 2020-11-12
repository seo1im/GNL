/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolim <seolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:28:10 by seolim            #+#    #+#             */
/*   Updated: 2020/07/14 14:07:46 by seolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# define MAX_FD			500

int		ft_strlen(char *str);
int		find_n(char *file);
char	*strjoin(char *s1, char *s2, int s2_len);
int		free_file(char *file);
char	*ft_strdup(char *str, int *i, int len);
int		get_next_line(int fd, char **line);

#endif
