/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaes <rmaes@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:41:46 by rmaes             #+#    #+#             */
/*   Updated: 2022/03/21 15:21:21 by rmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *c, int s, unsigned long n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)c)[i] == (unsigned char) s)
			return (&((char *)c)[i]);
		i++;
	}
	return (0);
}
