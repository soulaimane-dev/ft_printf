/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:27:29 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/11 11:08:14 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*str, int *len)
{
	int	i;

	if (str == NULL)
		ft_putstr("(null)", len);
	else
	{
		i = 0;
		while (str[i])
		{
			ft_putchar(str[i], len);
			i++;
		}
	}
}
