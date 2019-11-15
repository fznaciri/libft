/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnaciri- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:26 by fnaciri-          #+#    #+#             */
/*   Updated: 2019/10/24 20:56:34 by fnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (!(substr = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (ft_strlen(s) >= start)
		ft_strlcpy(substr, (char *)s + start, len + 1);
	else
		substr[0] = '\0';
	return (substr);
}
