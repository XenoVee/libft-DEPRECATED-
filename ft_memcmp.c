/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaes <rmaes@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:41:48 by rmaes             #+#    #+#             */
/*   Updated: 2021/12/17 16:41:48 by rmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned long			i;
	const unsigned char		*d1;
	const unsigned char		*d2;

	if (n == 0)
		return (0);
	d1 = s1;
	d2 = s2;
	i = 0;
	while (d1[i] == d2[i] && i + 1 < n)
		i++;
	return (d1[i] - d2[i]);
}
