/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaes <rmaes@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:42:21 by rmaes             #+#    #+#             */
/*   Updated: 2021/12/17 16:42:24 by rmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *ndl, unsigned long len)
{
	unsigned long	i;
	unsigned long	t;

	i = 0;
	t = 0;
	if (ndl[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + t] == ndl[t] && i + t < len)
		{
			t++;
			if (ndl[t] == '\0')
				return (&((char *)haystack)[i]);
		}
		t = 0;
		i++;
	}
	return (0);
}

/*static char	*ft_strnrstr(const char *hstk, const char ndl, unsigned long len)
{
	unsigned long	i;
	unsigned long	t;
	unsigned long	end;
	char			*haystack;

	i = 0;
	t = 0;
	haystack = (char *)hstk;
	end = ft_strlen(hstk) - 1;
	if (ndl[0] == '\0')
		return (&haystack[i]);
	while (haystack[end - i] && i < len)
	{
			while (haystack[end - i + t] == ndl[t] && i + t < len)
			{
				t++;
				if (ndl[t] == '\0')
					return (&haystack[end - i]);
			}
			t = 0;
		i++;
	}
	return (0);
}*/
