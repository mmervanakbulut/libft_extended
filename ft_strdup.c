/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musakbul <musakbul@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:40:45 by musakbul          #+#    #+#             */
/*   Updated: 2025/07/01 15:32:52 by musakbul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;
	size_t	i;

	len = ft_strlen((char *)s);
	copy = (char *)malloc(len + 1);
	i = 0;
	if (!copy)
		return (NULL);
	while (i <= len)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}
