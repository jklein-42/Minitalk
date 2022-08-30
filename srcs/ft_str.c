/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:07:56 by jklein            #+#    #+#             */
/*   Updated: 2022/08/30 20:56:47 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ft_printf.h"

		/* -- this function will allocate strings -- */

void	ft_str(char *args, int *len)
{
	size_t	str;

	str = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (args[str] != '\0')
	{
		ft_putchar_len(args[str], len);
		str++;
	}
}
