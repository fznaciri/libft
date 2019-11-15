/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:54:30 by fnaciri-          #+#    #+#             */
/*   Updated: 2019/10/24 20:57:31 by fnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	size = (size_t)(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!(strjoin = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(strjoin, (char *)s1, size);
	ft_strlcat(strjoin, (char *)s2, size);
	return (strjoin);
}
