/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:43:27 by fnaciri-          #+#    #+#             */
/*   Updated: 2019/10/20 19:45:20 by fnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *cs;

	cs = (char*)s;
	if (c == '\0')
		return (cs + ft_strlen(s));
	else
		while (*cs != '\0')
		{
			if (*cs != c)
				cs++;
			else
				return (cs);
		}
	return (NULL);
}
