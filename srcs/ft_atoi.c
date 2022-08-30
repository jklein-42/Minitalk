/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:00:45 by jklein            #+#    #+#             */
/*   Updated: 2022/08/30 20:59:52 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ft_printf.h"

			/* -- convert ASCII string to integer -- */

int	ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	in;

	res = 0;
	sign = 1;
	in = 0;
	while (str[in] == ' ' || str[in] == '\n'
		|| str[in] == '\t' || str[in] == '\f'
		|| str[in] == '\r' || str[in] == '\v')
		in++;
	if (str[in] == '-' || str[in] == '+')
	{
		if (str[in] == '-')
			sign = -1;
		in++;
	}
	while (str[in] >= '0' && str[in] <= '9')
	{
		res = res * 10 + str[in] - '0';
		in++;
	}
	return ((int)(res * sign));
}
