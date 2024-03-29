/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmaes <rmaes@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/17 16:41:27 by rmaes         #+#    #+#                 */
/*   Updated: 2022/10/13 17:45:39 by rmaes         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_strcmp(const char	*str1, char	*str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i] && i <= 10)
		i++;
	return (str2[i] - str1[i]);
}

static int	max_check(const char *str, int sign)
{
	int	i;
	int	ret;

	i = 0;
	ret = 1;
	while (str[i] >= 48 && str[i] <= 57)
		i++;
	if (i > 10 && sign == 1)
		ret = -1;
	if (i > 10 && sign == -1)
		ret = 0;
	if (sign == 1 && i == 10)
	{
		if (atoi_strcmp(str, "2147483647") < 0)
			ret = -1;
	}
	if (sign == -1 && i == 10)
	{
		if (atoi_strcmp(str, "2147483648") < 0)
			ret = 0;
	}
	return (ret);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((str[0] >= 9 && str[0] <= 13) || str[0] == 32)
		str++;
	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	if (str[0] == '+' && sign != -1)
		str++;
	if (max_check(str, sign) != 1)
		return (max_check(str, sign));
	while (str[0] >= '0' && str[0] <= '9')
	{
		num = num * 10 + str[0] - 48;
		str++;
	}
	num = num * sign;
	return (num);
}
