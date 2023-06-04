/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:05:35 by krocha            #+#    #+#             */
/*   Updated: 2023/06/02 17:10:33 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"

int	ft_putstr(char *c);
int	ft_putnbr(int n);
int	ft_put_hexa_lower(unsigned int n);
int	ft_put_hexa_upper(unsigned int n);

#endif
