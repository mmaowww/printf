/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <ebetrix@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 21:09:08 by ebetrix           #+#    #+#             */
/*   Updated: 2022/02/14 10:51:52 by ebetrix          ###   ########.ch       */
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
	else if ((text == 'x') || (text == 'X'))
		i = ft_writehexa(va_arg(args, unsigned int), text);
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

/*int	main(void)
{
	int	i;
	int	*p;
	int	j;

	j = LONG_MAX;
	i = 10;
	p = &i;
	printf ("Ma fonction renvoie: %d\n", ft_printf("Je fais un test: %p\n%p\n%x\n", p, i, j));
	printf("La vraie renvoie: %d\n", printf("Je fais un text: %p\n%p\n%x\n", p, i, j));
	return (0);
}*/
