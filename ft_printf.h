/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <ebetrix@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:12:37 by ebetrix           #+#    #+#             */
/*   Updated: 2022/02/02 20:00:53 by ebetrix          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
#include <limits.h>
//# include "libft.h"

int	ft_printf(const char *text, ...);
int	ft_variable(va_list args, const char text);
int	ft_writechar(char c);
int	ft_writeptr(unsigned long long n);
int	ft_writestr(char *str);
int	ft_writenbr(int n);
int	ft_writepos(unsigned int);

#endif
