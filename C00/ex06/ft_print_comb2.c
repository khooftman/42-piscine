/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 08:25:23 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/04 12:04:33 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_2digits(int a, int b)
{
	char	c;

    c = (a / 10) + '0';
    write(1, &c, 1);
    c = (a % 10) + '0';
    write(1, &c, 1);
    write(1, " ", 1);
    c = (b / 10) + '0';
    write(1, &c, 1);
	c = (b % 10) + '0';
    write(1, &c, 1);
    if (!(a == 98 && b == 99))
    	{
        	write(1, ",", 1);
            write(1, " ", 1);
		}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_2digits(a, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
