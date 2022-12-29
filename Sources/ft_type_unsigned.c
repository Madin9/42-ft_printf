/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 03:17:33 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/29 16:07:55 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

static unsigned long int	count_unsigned_int(unsigned int n)
{
	unsigned long int	count;

	count = 1;
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*ft_unsigned_itoa(unsigned int n)
{
	unsigned long int		lenght;
	unsigned long int		number;
	char					*char_n;

	number = n;
	lenght = count_unsigned_int(n);
	char_n = (char *)malloc((lenght + 1) * sizeof(char));
	if (!char_n)
		return (NULL);
	char_n[lenght] = '\0';
	while (number > 0)
	{
		lenght--;
		char_n[lenght] = (number % 10) + '0';
		number /= 10;
	}
	if (n == 0)
		char_n[0] = '0';
	return (char_n);
}

int	ft_type_unsigned(va_list param)
{
	unsigned int	u;
	int				index;
	char			*str;

	u = va_arg(param, unsigned int);
	str = ft_unsigned_itoa(u);
	index = 0;
	while (str[index])
	{
		ft_putchar_fd(str[index], 1);
		index++;
	}
	free(str);
	return (index);
}
