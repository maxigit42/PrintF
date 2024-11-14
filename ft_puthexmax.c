/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:11:26 by mwilline          #+#    #+#             */
/*   Updated: 2024/11/14 13:22:41 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexmax(unsigned long value, size_t *count)
{
	char	*hex_dig;

	hex_dig = "0123456789ABCDEF";
	if (value >= 16)
		ft_puthexmax(value / 16, count);
	ft_putchr(hex_dig[value % 16], count);
}
