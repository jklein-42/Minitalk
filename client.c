/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:22:15 by jklein            #+#    #+#             */
/*   Updated: 2022/08/30 21:07:22 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include "srcs/libft_ft_printf.h"

		/* --
		This program is used as a client termimal, it will receive a message
		from the server file in this program -- */

void	send_token(int pid, char *str, size_t len)
{
	size_t	byte;
	int		token;

	byte = 0;
	while (byte <= len)
	{
		token = 0;
		while (token < 7)
		{
			if (str[byte] & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			str[byte] >>= 1;
			token++;
			usleep(300);
		}
		byte++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		send_token(pid, str, ft_strlen(str));
	}
	else
		ft_printf("\n INVALID PARAMATERS! \n");
}
