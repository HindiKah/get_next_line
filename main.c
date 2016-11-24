/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 12:47:43 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/24 16:23:32 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int file_d;
	int i;
	char *ret;
	t_files *file;

	ret = NULL;
	i = 0;
	if (argc < 2)
		return (0);
	file = (t_files*)malloc(sizeof(file_d));
	file->myfd = open(argv[1], O_RDONLY);
	if (file->myfd == -1)
		return (0);
	file->nb_backn = 0;
	ret = ft_put_intostr(file->myfd, ret);
		ft_putstr(ft_ret_resize(ret, file));
	free(ret);
	return (0);
}
