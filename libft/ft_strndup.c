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

char	*ft_strndup(const char *str, size_t n)
{
	char *ret;

	if (n > ft_strlen(str))
		n = ft_strlen(str);
	ret = malloc(n + 1);
	if (!ret)
		return (NULL);
	ft_strncpy(ret, str, n);
	ret[n] = '\0';
	return (ret);
}
