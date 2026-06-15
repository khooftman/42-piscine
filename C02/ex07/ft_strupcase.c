/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:07:14 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/10 15:41:09 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] !='\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	(void)argc;

	if (argv[1] != NULL)
	{
		ft_strupcase(argv[1]);
	}
	
	write(1, ft_strupcase(argv[1]), ft_strlen(argv[1])); 
	return (0);
}

int main(void)
{
    char str[] = "kleine";

    ft_strupcase(str);
    write(1, str, 6);
    write(1, "\n", 1);
    return (0);
}
*/
