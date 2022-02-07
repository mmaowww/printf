/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <ebetrix@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:09:08 by ebetrix           #+#    #+#             */
/*   Updated: 2022/02/02 20:14:08 by ebetrix          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_variable(va_list args, const char text)
{
	int	i;

	i = 0;
	if (text == 'c')
		i = ft_writechar(va_arg(args, int));
	if (text == 's')
		i = ft_writestr(va_arg(args, char*));
	else if (text == 'p')
		i = ft_writeptr(va_arg(args, unsigned long long));
	if ((text == 'd') || (text == 'i'))
		i = ft_writenbr(va_arg(args, int));
	else if (text == 'u')
		i = ft_writepos(va_arg(args, unsigned int));
//	else if ((text == 'x') || (text == 'X'))
//		i = ft_writehexa(va_arg(args, unsigned int));
	else if (text == '%')
	{
		write (1, "%", 1);
		i = 1;
	}
	return (i);
}

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int	i;
	
	i = 0;
	va_start(args, text);
	while (*text)
	{
		if (*text != '%')
		{
			write (1, text, 1);
			i++;
		}
		else if (*text == '%')
		{
			i += ft_variable(args, *(text + 1));
			text++;
		}
		text++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	printf ("Elle me renvoie: %d\n", ft_printf("Je fais un test: %u\n", 12));
	printf("Les hexa dans la vraie: %x\n%x\n%x\n", 17, 12, 4);
	return (0);
}
