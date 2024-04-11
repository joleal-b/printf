/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpark <jpark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:15:51 by joleal-b          #+#    #+#             */
/*   Updated: 2023/11/13 11:30:26 by jpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putnbr(int n);
int	ft_putptr(unsigned long n);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_puthexa(unsigned int n, int c);
int	ft_putunbr(unsigned int n);
int	ft_printf(const char *str, ...);

#endif
