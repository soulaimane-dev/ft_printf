/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:54:01 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/11 17:49:17 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nbr, int *len)
{
	if (nbr > 9)
	{
		ft_putunsigned(nbr / 10, len);
		ft_putunsigned(nbr % 10, len);
	}
	else
		ft_putchar(nbr + '0', len);
}
