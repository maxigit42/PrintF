/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:56:14 by mwilline          #+#    #+#             */
/*   Updated: 2024/10/23 17:43:51 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putf(unsigned int n, size_t *count)
{
	if (n > 9)
		ft_putf(n / 10, count);
	ft_putchr((n % 10) + '0', count);
}
