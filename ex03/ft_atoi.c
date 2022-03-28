/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unix_user <unix_user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:32:20 by unix_user         #+#    #+#             */
/*   Updated: 2022/03/28 23:00:40 by unix_user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus_cnt;
	int	num;

	minus_cnt = 0;
	num = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_cnt++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	if (minus_cnt % 2 == 1)
		num *= -1;
	return (num);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("  	--+-+1234ab567"));
// 	printf("%d\n", ft_atoi("  \t\n\v\f\r  ++1234567"));
// 	return (0);
// }
