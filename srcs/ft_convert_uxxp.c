/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_uxxp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:01:52 by jklein            #+#    #+#             */
/*   Updated: 2022/08/30 21:02:41 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ft_printf.h"

		/* -- this process will controll the unsigned varabels -- */

void	ft_p(size_t	p, int *len)
{
	char	str[25];
	int		in;
	char	*base_char;

	base_char = "0123456789abcdef";
	in = 0;
	write(1, "0x", 2);
	(*len) += 2;
	if (p == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (p != 0)
	{
		str[in] = base_char[p % 16];
		p = p / 16;
		in++;
	}
	while (in--)
	{
		ft_putchar_len(str[in], len);
	}
}

		/* -- the base charactor is definded here -- */

void	ft_xx(unsigned int x, int *len, char x_or_x)
{
	char	str[25];
	char	*base_char;
	int		in;

	if (x_or_x == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789abcdef";
	in = 0;
	if (x == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (x != 0)
	{
		str[in] = base_char [x % 16];
		x = x / 16;
		in++;
	}
	while (in--)
		ft_putchar_len(str[in], len);
}

		/* -- controlles the size output of the process -- */

void	ft_u(unsigned int u, int *len)
{
	if (u >= 10)
		ft_u(u / 10, len);
	ft_putchar_len(u % 10 + '0', len);
}
