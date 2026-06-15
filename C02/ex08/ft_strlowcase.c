/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 09:53:15 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/10 15:32:09 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*int main(void)
{
	char str[] = "LOW";
	
	ft_strlowcase(str);
	write(1, str, 3);
	return (0);
}*/

/*int main(int argc, char **argv)
{
	(void)argc;

	ft_strlowcase(argv[1]);
	write(1, argv[1], 3);
	return (0);
}
*/
