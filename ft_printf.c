/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:13:24 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/29 16:50:32 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		index;
	int		strlenght;
	va_list	param;

	va_start(param, str);
	strlenght = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == '%')
		{
			index++;
			strlenght += ft_get_type(str[index], param);
		}
		else
		{
			ft_putchar_fd(str[index], 1);
			strlenght += 1;
		}
		index++;
	}
	va_end(param);
	return (strlenght);
}
