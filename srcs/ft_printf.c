/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:04:55 by jklein            #+#    #+#             */
/*   Updated: 2022/08/30 20:52:11 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ft_printf.h"

		/* -- this part of this process checks the functon status
		the argument will process the length of each statement --  */

static void	check_printf(char s, va_list	*args, int	*len, int *i)
{
	if (s == 's')
		ft_str(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_nbr(va_arg(*args, int), len);
	else if (s == 'u')
		ft_u(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_xx(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_xx(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_p(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char	*s, ...)
{
	va_list	args;
	int		in;
	int		len;

	in = 0;
	len = 0;
	va_start(args, s);
	while (s[in] != '\0')
	{
		if (s[in] == '%')
		{
			in++;
			check_printf(s[in], &args, &len, &in);
			in++;
		}
		else
		{
			ft_putchar_len((char)s[in], &len);
			in++;
		}
	}
	va_end(args);
	return (len);
}
