/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilline <mwilline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:11:46 by mwilline          #+#    #+#             */
/*   Updated: 2024/11/14 13:22:53 by mwilline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchr(char c, size_t *count);
void	ft_putnbr(int n, size_t *count);
void	ft_putmem(void *ptr, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_puthexmin(unsigned long value, size_t *count);
void	ft_puthexmax(unsigned long value, size_t *count);
void	ft_putf(unsigned int n, size_t *count);
int		ft_printf(char const *str, ...);
char	*ft_aux_pf(unsigned long long n, char *base);

#endif
