/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <ybenoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 21:56:49 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/25 16:46:56 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int fd;
	int fd1;
	char **line;
	int ret;
	line = (char**)malloc(sizeof(char*) * 2);

	if (argc >= 2)
	{
		fd = open(argv[1], O_RDONLY);
		fd1 = open(argv[2], O_RDONLY);
	}
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	ret = get_next_line(fd1, line);
	ft_putstr(line[0]);
	ft_putnbr(ret);
	ft_putstr("\n");
	return (0);
}
