/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_c.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:37:25 by ybenoit           #+#    #+#             */
/*   Updated: 2016/11/07 21:42:54 by ybenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_c(char *str, char c)
{
	char *ret;

	ret = ft_strndup(str, ft_strlen_c(str, c));
	return (ret);
}
