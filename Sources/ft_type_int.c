/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:12:51 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/29 16:04:36 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_type_int(va_list param)
{
	int		value;
	int		index;
	char	*str;

	value = va_arg(param, int);
	str = ft_itoa(value);
	index = 0;
	while (str[index])
	{
		ft_putchar_fd(str[index], 1);
		index++;
	}
	free(str);
	return (index);
}
