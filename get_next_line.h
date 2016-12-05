/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <ybenoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:08:31 by ybenoit           #+#    #+#             */
/*   Updated: 2016/12/05 19:13:15 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include "./libft/libft.h"

typedef struct	s_gnl
{
	int			fd;
	char		*buff;
}				t_gnl;

t_gnl			*gnl_findorcreate_file(const int fd, t_list **my_list);
ssize_t			gnl_readoneline(t_gnl *file);
int				get_next_line(const int fd, char **line);

#endif
