/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:43:33 by hlachkar          #+#    #+#             */
/*   Updated: 2021/11/17 23:42:36 by hlachkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*nptr)
{
	int				sign;
	long			res;

	sign = 1;
	res = 0;
	while ((*nptr > 8 && *nptr < 14) || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - 48;
		if (res < 0 && sign == -1)
			return (0);
		if (res < 0)
			return (-1);
		nptr++;
	}
	return (res * sign);
}
