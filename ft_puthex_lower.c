/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:49:25 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/11 17:48:02 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex(char *buffer, int i, int *len)
{
	while (i > 0)
	{
		ft_putchar(buffer[i - 1], len);
		i--;
	}
}

void	ft_puthex_lower(unsigned int nbr, int *len)
{
	char	buffer[9];
	int		i;
	int		reminder;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (nbr == 0)
		ft_putchar('0', len);
	while (nbr)
	{
		reminder = nbr % 16;
		buffer[i] = hex[reminder];
		i++;
		nbr /= 16;
	}
	print_hex(buffer, i, len);
}
