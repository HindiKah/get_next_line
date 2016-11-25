/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:24:16 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/25 16:51:28 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static t_files	*list = NULL;
	t_files			*new;

	if ((new = ft_search_fd(fd, &list)) && !new->file)
	{
		new->file = ft_put_intostr(fd, new->file);
	}
	line[0] = ft_ret_resize(new->file, new);
	if (line[0] == NULL)
		return (0);
	return (1);
}

char	*ft_ret_resize(char *str, t_files *current)
{
	int		i;
	int		j;
	int		t;
	char	*res;

	t = 0;
	i = 0;
	j = 0;
	while (t != current->nb_backn && str[i])
	{
		if (str[i] == '\n')
			t++;
		i++;
	}
	j = i;
	while (str[j] != '\n' && str[j])
		j++;
	if (str[i] == '\0')
		return (NULL);
	current->nb_backn++;
	if (str[j] != '\0')
	{
		res = (ft_strsub(str, i, j - i));
		return (res);
	}
	return (NULL);
}

char	*ft_put_intostr(int fd, char *res)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	int i;
	char	*tmp_res;

	i = 0;
	tmp_res = NULL;
	res = (char*)malloc(sizeof(char) * 2);
	while ((ret = read(fd, &buf, BUFF_SIZE)) > 0)
	{
		buf[BUFF_SIZE] = '\0';
		tmp_res = res;
		free(res);
		res = ft_strjoin(tmp_res, buf);
		i++;
	}
	if (!res)
		return (NULL);
	return (res);
}

t_files		*ft_add_file(int fd, t_files **a_list)
{
	char *ret;
	t_files *mfile;

	mfile = (t_files*)malloc(sizeof(t_files));
	if (!mfile)
		return (NULL);
	if (mfile->myfd == -1)
		return (NULL);
	mfile->myfd = fd;
	mfile->nb_backn = 0;
	mfile->file = NULL;
	mfile->next = *a_list;
	*a_list = mfile;
	return(mfile);
}

t_files		*ft_search_fd(int fd, t_files **a_list)
{
	t_files *current;

	if (!*a_list)
	{
		return (ft_add_file(fd, a_list));
	}
	current = *a_list;
	while (current != NULL)
	{
		if (current->myfd == fd)
			return (current);
		current = current->next;
	}
	return (ft_add_file(fd, a_list));
}
