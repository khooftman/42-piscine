/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 09:49:07 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/18 19:16:16 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
/*int	main(void)
{
	printf("Square Root  0: %d\n", ft_sqrt(0));
	printf("Square Root  -2: %d\n", ft_sqrt(-2));
	printf("Square Root  49: %d\n", ft_sqrt(49));
}*/
