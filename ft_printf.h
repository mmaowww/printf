/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <ebetrix@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:12:37 by ebetrix           #+#    #+#             */
/*   Updated: 2022/02/22 17:20:56 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
//# include "libft.h"

int	ft_printf(const char *text, ...);
int	ft_variable(va_list args, const char text);
int	ft_writechar(char c);
int	ft_writehexa(unsigned long long n, const char text);
int	ft_writeptr(unsigned long long n);
int	ft_writestr(char *str);
int	ft_writenbr(int n);
int	ft_writepos(unsigned int n);

#endif
