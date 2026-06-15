/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:54:55 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/04 20:34:07 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c ,1);
}

void	ft_putnbr(int nb)
{
		
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return; 
	}
	if (nb < 0) 
		{
			ft_putchar('-');
			nb = -nb;
		}
			if(nb > 9)
			{
				ft_putnbr(nb / 10);
			}
					ft_putchar((nb % 10) + '0');
}

/* int main(void)
{
	ft_putnbr(123232);
	ft_putchar('\n');
	ft_putnbr(12);
	ft_putchar('\n');
	ft_putnbr(0);
}*/
