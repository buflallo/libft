/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/17 17:27:49 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	int				i;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	len_dest = ft_strlen(dst);
	if (len_dest > size || !size)
		return (size + len_src);
	i = 0;
	while (src[i] && len_dest + i < size - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
