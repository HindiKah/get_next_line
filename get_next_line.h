/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:12:07 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/25 15:55:26 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_H_
# define _GET_NEXT_LINE_H_

# define BUFF_SIZE 2
# include "libft.h"
typedef struct			s_files
{
	int					myfd;
	int					nb_backn;
	char				*file;
	struct s_files				*next;
}						t_files;

int						get_next_line(const int fd, char **line);
char					*ft_ret_resize(char *str, t_files *current);
char					*ft_put_intostr(int fd, char *ret);
t_files					*ft_add_file(int fd, t_files **a_list);
t_files					*ft_search_fd(int fd, t_files **a_list);
#endif


