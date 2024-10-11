/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktintim- <ktintim-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:52:53 by ktintim-          #+#    #+#             */
/*   Updated: 2024/10/11 13:57:44 by ktintim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft_printf/libft.h"
# include <stdarg.h>

void	ft_unsignedputnbr_fd(unsigned int n, int fd, int *length);
int		ft_printf(const char *str, ...);
void	ft_putnbrbase_printf(unsigned int nbr, const char *base, int *length);
void	ft_putchar_printf(char c, int fd, int *length);
void	ft_putstr_printf(char *s, int fd, int *length);
void	ft_putnbr_printf(int n, int fd, int *length);
void	ft_pointer_printf(size_t nbr, const char *base, int *length);

#endif