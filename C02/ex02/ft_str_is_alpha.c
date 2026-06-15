/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:33:07 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/10 15:37:04 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
    if (ft_str_is_alpha("Hello") == 1)
        write(1, "1\n", 2);
    else
        write(1, "0\n", 2);

    if (ft_str_is_alpha("Hello42") == 1)
        write(1, "1\n", 2);
    else
        write(1, "0\n", 2);

    if (ft_str_is_alpha("") == 1)
        write(1, "1\n", 2);
    else
        write(1, "0\n", 2);

    return (0);
}
*/
