/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:01:57 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/11 17:48:57 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(char *buffer, int i, int *len)
{
	while (i)
	{
		ft_putchar(buffer[i - 1], len);
		i--;
	}
}

static void	convert_to_hex(unsigned long nbr, int *len)
{
	char	buffer[16];
	char	*hex;
	int		i;
	int		reminder;

	i = 0;
	hex = "0123456789abcdef";
	while (nbr)
	{
		reminder = nbr % 16;
		buffer[i] = hex[reminder];
		nbr /= 16;
		i++;
	}
	print_hex(buffer, i, len);
}

void	ft_putptr(void *ptr, int *len)
{
	unsigned long	nbr;

	if (ptr == NULL)
		ft_putstr("0x0", len);
	else
	{
		nbr = (unsigned long)ptr;
		ft_putchar('0', len);
		ft_putchar('x', len);
		convert_to_hex(nbr, len);
	}
}
