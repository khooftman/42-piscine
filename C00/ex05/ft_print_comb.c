/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:48:12 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/04 08:23:00 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while(a <= '7')
	{
		b = a + 1;
		while(b <= '8') 
		{
			c = b + 1;
			while(c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);

				if(!(a == '7' && b == '8' && c == '9'))
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;	
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
}
