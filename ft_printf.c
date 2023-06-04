/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha <krocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:01:53 by krocha            #+#    #+#             */
/*   Updated: 2023/06/02 17:11:02 by krocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checkVariable(const char *str, int i, va_list arg_list)
{
	if (str[i] == '%')
		return(ft_putchar('%'));
	//print char - %c
	else if (str[i] == 'c')
		return(ft_putchar(va_arg(arg_list, int)));
	//print a string - %s
	else if (str[i] == 's')
		return(ft_putstr(va_arg(arg_list, char *)));
	//print a void * pointer return hexadecimal format - %p
	else if (str[i] == 'p')
		return ();
	//print a decimal (base 10) number - %d || 	print an integer in base 10 - %i
	else if (str[i] == 'd' || str[i] == 'i')
		return (ft_putnbr(va_arg(arg_list, int)));
	//print an unsigned decimal ( base 10) number - %u
	else if (str[i] == 'u')
		return (ft_putnbr_uns(va_arg(arg_list, unsigned int)));
		//print a hexadecimal (base 16) lowercase format - %x
	else if (str[i] == 'x')
		return (ft_put_hexa_lower(va_arg(arg_list, unsigned int)));
	//print a hexadecimal (base 16) uppercase format - %X
	else if (str[i] == 'X')
		return (ft_put_hexa_upper(va_arg(arg_list, unsigned int)));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int	i;
	int a;

	va_start(arg_list, str);
	i = 0;
	a = 0;
	while (str[i])
	{
		if(str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			a += checkVariable(str, i, arg_list);
		}
		else
			a += ft_putchar(str[i]);
		i++;
	}
	va_end(arg_list);
	return (a);
}
