/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:06:48 by jklein            #+#    #+#             */
/*   Updated: 2022/08/30 20:54:41 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ft_printf.h"

		/* -- use a character output to write a integer -- */

void	ft_putchar_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}
