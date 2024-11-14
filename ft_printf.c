/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:06:27 by mwilline          #+#    #+#             */
/*   Updated: 2024/10/23 17:43:16 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	format(va_list va, char *str, size_t *count)
{
	if (*str == 'c')
		ft_putchr(va_arg(va, int), count);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(va, int), count);
	else if (*str == 'p')
		ft_putmem(va_arg(va, void *), count);
	else if (*str == 's')
		ft_putstr(va_arg(va, char *), count);
	else if (*str == 'u')
		ft_putf(va_arg(va, unsigned int), count);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
		{
			ft_puthexmin(va_arg(va, unsigned int), count);
		}
		else
			ft_puthexmax(va_arg(va, unsigned int), count);
	}
	else if (*str == '%')
		ft_putchr('%', count);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	count;

	if (!str)
		return (0);
	count = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			format(va, (char *)str, &count);
		}
		else
			ft_putchr(*str, &count);
		str++;
	}
	va_end(va);
	return (count);
}

// int main(void) {
//     size_t count = 0;

//     printf("Prueba 1 (printf): ");
//     printf(" %p %p\n", NULL, NULL);
//     ft_printf("Prueba 1 (ft_printf): ");
//     ft_printf(" %p %p\n", NULL, NULL);

// 	return(0);
// }