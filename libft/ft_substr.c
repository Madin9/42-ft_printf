/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chonorat <chonorat@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:19:09 by chonorat          #+#    #+#             */
/*   Updated: 2022/12/05 16:37:22 by chonorat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	index;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	pointer = (char *)malloc((sizeof(char) * len) + 1);
	if (!pointer)
		return (NULL);
	if (start >= s_len)
		return (pointer);
	index = 0;
	while (index < len)
		pointer[index++] = s[start++];
	pointer[index] = '\0';
	return (pointer);
}
