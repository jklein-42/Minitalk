/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:34:05 by jklein            #+#    #+#             */
/*   Updated: 2022/08/30 21:09:51 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "srcs/libft_ft_printf.h"

		/* --
		In this server file is a compiler that creates a connection between
		two terminals -- */

typedef struct s_message
{
	char	ser;
	size_t	byte;
}	t_message;

t_message	g_msg;

void	bit_handler(int bit)
{
	g_msg.ser += ((bit & 1) << g_msg.byte);
	g_msg.byte++;
	if (g_msg.byte == 7)
	{
		ft_printf("%c", g_msg.ser);
		if (!g_msg.ser)
			ft_printf("\n");
		g_msg.ser = 0;
		g_msg.byte = 0;
	}
}

int	main(void)
{
	ft_printf("[SERVER SUCCESS]\n");
	ft_printf("[PID: %d]\n", getpid());
	while (1)
	{
		signal(SIGUSR2, bit_handler);
		signal(SIGUSR1, bit_handler);
		pause();
	}
	return (0);
}
