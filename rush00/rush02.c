/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:26:09 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/01 16:52:20 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	usethem(int x, char start, char mid, char end)
{
	ft_putchar (start);
	while ((x - 1) > 1)
	{
		ft_putchar(mid);
		x --;
	}
	if (x > 1)
	{
		ft_putchar (end);
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x == 1 && y == 1)
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		else
		{
			usethem (x, 'A', 'B', 'A');
			while ((y - 1) > 1)
			{
				usethem (x, 'B', ' ', 'B');
				y --;
			}
			if (y > 1)
			{
				usethem (x, 'C', 'B', 'C');
			}
		}
	}
}
