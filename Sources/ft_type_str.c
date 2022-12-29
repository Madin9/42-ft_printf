/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:53:44 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/29 16:07:24 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

int	ft_type_str(va_list param)
{
	int		index;
	char	*str;

	str = va_arg(param, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	index = 0;
	while (str[index])
	{
		ft_putchar_fd(str[index], 1);
		index++;
	}
	return (index);
}
