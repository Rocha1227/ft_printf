/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:05:35 by krocha            #+#    #+#             */
/*   Updated: 2023/06/05 15:00:43 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	"libft/libft.h"
# include	<stdarg.h>
# include	<stdint.h>

int		ft_putstr(char *c);
int		ft_putnbr(int n);
int		ft_put_hexa_lower(unsigned int n);
int		ft_put_hexa_upper(unsigned int n);
int		ft_hexa_base_lower(unsigned int n);
int		ft_hexa_base_upper(unsigned int n);
char	ft_putchar(char c);
int		ft_put_pointer(unsigned long long int ptr);
int		ft_print_ptr(uintptr_t ptr);
int		ft_hexa_base_pointer(uintptr_t ptr);
int		ft_putnbr_uns(int n);
int		ft_printf(const char *str, ...);
#endif
