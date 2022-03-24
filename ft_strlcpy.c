/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaes <rmaes@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:42:14 by rmaes             #+#    #+#             */
/*   Updated: 2021/12/17 16:42:15 by rmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size)
{
	unsigned long	i;
	unsigned long	c;

	i = 0;
	c = 0;
	while (src[c] != 0)
		c++;
	if (size == 0)
		return (c);
	while (i < size - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
		dst[i] = 0;
	return (c);
}
