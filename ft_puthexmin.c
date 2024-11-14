/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:32:07 by mwilline          #+#    #+#             */
/*   Updated: 2024/11/14 13:22:32 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexmin(unsigned long value, size_t *count)
{
	char	*hex_dig;

	hex_dig = "0123456789abcdef";
	if (value >= 16)
		ft_puthexmin(value / 16, count);
	ft_putchr(hex_dig[value % 16], count);
}
