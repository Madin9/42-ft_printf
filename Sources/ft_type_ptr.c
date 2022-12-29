/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:35:21 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/29 16:04:41 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

static int	ft_hexa_counter_ptr(long unsigned int value)
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

static void	ft_puthexa_ptr(long unsigned int hexa_convert)
{
	if (hexa_convert >= 16)
	{
		ft_puthexa_ptr(hexa_convert / 16);
		ft_puthexa_ptr(hexa_convert % 16);
	}
	else
		ft_putchar_fd("0123456789abcdef"[hexa_convert], 1);
}

int	ft_type_ptr(va_list param)
{
	long unsigned int	value;

	value = va_arg(param, long unsigned int);
	ft_putstr_fd("0x", 1);
	if (value == 0)
	{
		ft_putchar_fd('0', 1);
		return (3);
	}
	else
	{
		ft_puthexa_ptr(value);
		return (ft_hexa_counter_ptr(value) + 2);
	}
}
