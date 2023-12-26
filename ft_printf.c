/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:27:15 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/11 18:03:24 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printf_handler(const char *str, int i, va_list list, int *len)
{
	if (str[i] == 'c')
		ft_putchar(va_arg(list, int), len);
	else if (str[i] == 's')
		ft_putstr(va_arg(list, char *), len);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(list, int), len);
	else if (str[i] == 'u')
		ft_putunsigned(va_arg(list, unsigned int), len);
	else if (str[i] == 'x')
		ft_puthex_lower(va_arg(list, unsigned int), len);
	else if (str[i] == 'X')
		ft_puthex_upper(va_arg(list, unsigned int), len);
	else if (str[i] == 'p')
		ft_putptr(va_arg(list, void *), len);
	else if (str[i] == '%')
		ft_putchar('%', len);
	else
		ft_putchar(str[i], len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	list;

	len = 0;
	va_start(list, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			printf_handler(str, i, list, &len);
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(list);
	return (len);
}
