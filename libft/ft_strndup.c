/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:37:25 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/07 21:42:54 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(char *str, size_t n)
{
	int i;
	char *ret;

	i = 0;
	if (!str)
		return (NULL);
	if (ft_strlen(str) >= n)
	{
		ret = (char*)malloc(sizeof(char) * (ft_strlen			(str) + 1));
		ft_strncpy(ret, str, n);
	}
	else
	{
		ret = (char*)malloc(sizeof(char) * (n + 1));
		ft_strncpy(ret, str, ft_strlen(str));
	}
	ret[i] = '\0';
	return (ret);
}
