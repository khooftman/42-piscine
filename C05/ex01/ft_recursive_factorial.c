/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 09:33:58 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/18 18:50:57 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}
/*int	main(void)
{
	printf("-1! = %d\n", ft_recursive_factorial(-1));
	printf("0! = %d\n", ft_recursive_factorial(0));
	printf("1! = %d\n", ft_recursive_factorial(1));
	printf("5! = %d\n", ft_recursive_factorial(5));
}*/
