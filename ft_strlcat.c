/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:32:37 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/31 16:56:01 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		j;
	size_t	dst_len;
	size_t	src_len;

	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (len < dst_len)
		return (len + src_len);
	if (len > dst_len)
	{
		ft_strncat(dst, src, len - 1);
		dst[len - 1] = '\0';
	}
	return (dst_len + src_len);
}
