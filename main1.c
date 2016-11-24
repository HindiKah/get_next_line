/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <ybenoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 21:56:49 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/24 22:03:31 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int fd;
	char **line;
	line = (char**)malloc(sizeof(char*) * 2);

	if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	int ret = get_next_line(fd, line);
	ft_putstr(line[0]);
	return (0);
}
