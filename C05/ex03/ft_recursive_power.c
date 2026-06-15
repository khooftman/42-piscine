/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 09:44:32 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/18 19:31:34 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> 
//#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
/*
int	main(void)
{
	printf("3 ^ 3 = %d\n", ft_recursive_power(3, 3)); 
	printf("-3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
}*/
