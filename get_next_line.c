/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:24:16 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/24 22:57:54 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static t_files	*list = NULL;

	*line = NULL;
	free(*line);
	ft_putstr("error2\n");
	ft_search_fd(fd, list);
	ft_putstr("error1\n");
	line[0] = ft_put_intostr(fd, line[0]);
	ft_putstr("error21\n");
	line[0] = ft_ret_resize(line[0],ft_search_fd(fd, list)); 
	if (!line)
		return (0);
	return (1);
}

char	*ft_ret_resize(const char *str, t_files *current)
{
	int		i;
	int		j;
	int		t;
	char	*res;

	t = 0;
	i = 0;
	j = 0;
	if (str[i])
	{
		while (t != current->nb_backn)
		{
			if (str[i] == '\n' || str[i] == '\0')
				t++;
			i++;
		}
		j = i;
		while (str[j] != '\n' && str[j])
			j++;
		current->nb_backn++;
		res = (ft_strsub(str, i, j - i));
		return (res);
	}
	else return (NULL);
}

char	*ft_put_intostr(int fd, char *res)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	int i;
	char	*tmp_res;

	i = 0;
	tmp_res = NULL;
	ft_putstr("error2\n");
	res = (char*)malloc(sizeof(char) * 2);
	ft_putstr("error3\n");
	while ((ret = read(fd, &buf, BUFF_SIZE)) > 0)
	{
		buf[BUFF_SIZE] = '\0';
		tmp_res = res;
		free(res);
		res = ft_strjoin(tmp_res, buf);
		i++;
	}
	return (res);
}

t_files		*ft_add_file(int fd, t_files *list)
{
	char *ret;
	t_files *file;

	if (file->myfd == -1)
		return (NULL);
	ft_putstr("error3\n");
	file = (t_files*)malloc(sizeof(t_files));
	file->myfd = fd;
	file->nb_backn = 0;
	file->next = list;
	list = file;
	return(file);
}

t_files		*ft_search_fd(int fd, t_files *list)
{
	t_files *current;

	current = (t_files*)malloc(sizeof(t_files));
	ft_putstr("error30\n");
	current->next = list;
	ft_putstr("error35\n");
		while (current->next != NULL)
		{
			ft_putstr("error40\n");
			if (current->myfd == fd)
				return (current);
			current = current->next;
		}
	return (ft_add_file(fd, list));
}
