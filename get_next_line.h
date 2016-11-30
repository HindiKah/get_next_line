#include "./libft/libft.h"

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

typedef struct	s_gnl
{
	int			fd;
	char		*buff;
}				t_gnl;

t_gnl			*gnl_findorcreate_file(const int fd, t_list **my_list);
ssize_t			gnl_readoneline(t_gnl *file);
int				get_next_line(const int fd, char **line);

#endif
