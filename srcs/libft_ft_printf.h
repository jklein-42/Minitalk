/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ft_printf.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:35 by jklein            #+#    #+#             */
/*   Updated: 2022/05/31 17:57:47 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FT_PRINTF_H
# define LIBFT_FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int				ft_atoi(const char *str);
int				ft_strlen(char *s);

int				ft_printf(const char *s, ...);
void			ft_putchar_len(char c, int *len);
void			ft_nbr(int n, int *len);
void			ft_str(char *args, int *len);
void			ft_xx(unsigned int x, int *len, char x_or_x);
void			ft_u(unsigned int u, int *len);
void			ft_p(size_t p, int *len);

#endif
