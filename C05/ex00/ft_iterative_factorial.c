/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:26:54 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/18 18:49:53 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*int main(void)
{
	printf("!1 = %d\n", ft_iterative_factorial(-1));
	printf("!0 = %d\n", ft_iterative_factorial(0));
	printf("!1 = %d\n", ft_iterative_factorial(1));
	printf("!5 = %d\n", ft_iterative_factorial(5));
	return (0);
}*/
