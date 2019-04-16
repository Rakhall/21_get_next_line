/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sstannis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:12:12 by sstannis          #+#    #+#             */
/*   Updated: 2018/12/26 20:42:42 by sstannis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# define BUFF_SIZE 1
# if (BUFF_SIZE <= 0)
#  error BUFF_SIZE cannot be <=0
# endif
# define CHECK(x) if (x < 0) return (-1)
# define CHECKMALL(x) if ((x) == NULL) return (-1)

int		get_next_line(const int fd, char **line);

#endif
