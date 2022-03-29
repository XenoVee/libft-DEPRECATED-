/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaes <rmaes@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:42:11 by rmaes             #+#    #+#             */
/*   Updated: 2022/03/29 16:31:39 by rmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*bad_input(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (0);
	if (!s1 && s2)
		return (ft_substr(s2, 0, ft_strlen(s2)));
	if (s1 && !s2)
		return (ft_substr(s1, 0, ft_strlen(s1)));
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	unsigned int	i;
	char			*str;

	if (!s1 || !s2)
		return (bad_input(s1, s2));
	i = 0;
	len = ft_strlen(s1);
	str = malloc((len + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - len])
	{
		str[i] = s2[i - len];
		i++;
	}
	str[i] = '\0';
	return (str);
}
