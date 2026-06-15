/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 09:22:42 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/13 09:29:18 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] !='\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
	printf("de lengte is: %d\n", ft_strlen("dit is een string")); 	
}
