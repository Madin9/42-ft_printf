/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_xX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:33:56 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/29 16:01:41 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

static int	ft_hexa_counter(unsigned int value)
{
	int	counter;

	counter = 0;
	while (value > 0)
	{
		counter++;
		value /= 16;
	}
	return (counter);
}

static void	ft_puthexa(unsigned int hexa_convert, char type)
{
	if (hexa_convert >= 16)
	{
		ft_puthexa(hexa_convert / 16, type);
		ft_puthexa(hexa_convert % 16, type);
	}
	else
	{
		if (type == 'x')
			ft_putchar_fd("0123456789abcdef"[hexa_convert], 1);
		if (type == 'X')
			ft_putchar_fd("0123456789ABCDEF"[hexa_convert], 1);
	}
}

int	ft_type_hexa(va_list param, char type)
{
	unsigned int	value;

	value = va_arg(param, unsigned int);
	if (value == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else
	{
		ft_puthexa(value, type);
		return (ft_hexa_counter(value));
	}
}
