/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 09:20:55 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/10 15:39:17 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i ++;
	}
	return (1);
}
/*int	main(void)
{
	if (ft_str_is_lowercase("abc") == 1)
	{
		write(1, "low\n", 4);
	}
	else
	{
		write(1, "not\n", 4);
	}
	return (0);
}
*/
