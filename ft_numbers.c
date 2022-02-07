/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <ebetrix@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:40:00 by ebetrix           #+#    #+#             */
/*   Updated: 2022/02/07 14:39:20 by ebetrix          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_writenbr(int n)
{
	int	i;
	char	c;

	i = 0;
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		i = 11;
		return (i);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= (-1);
		i++;
	}
	if (n > 9)
		i += ft_writenbr(n / 10);
	c = (char)(n % 10 + 48);
	write(1, &c, 1);
	i++;
	return (i);
}

int	ft_writepos(unsigned int n)
{
	int	i;
	char	c;

	i = 0;
	if (n > 9)
		i += ft_writepos(n / 10);
	c = (char)(n % 10 + 48);
	write (1, &c, 1);
	i++;
	return (i);
}

int	ft_writehexa(unsigned int n)
{
	int	i;
	char	c;

	i = 0;
	if (n > 15)
	{
		i += ft_writehexa(n/16);
	}
	if (n > 9 && n < 16)
	{
		c = (char)(n % 16 
	}
	if (n >= 0 && n < 10)
	{
	
	}
	i++;
	return (i);
}

int	ft_writeptr(unsigned long long n)
{
	int	i;
	char	c;

	write(1, "0x",2);
	i = 2;
	if (n < 9)
	{
		ft_writeptr(n / 10);
	}
	c = (char)(n % 10 + 48);
	write(1, &c, 1);
	i++;
	return (i);
}
