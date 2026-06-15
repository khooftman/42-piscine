/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:03:45 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/11 19:52:19 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main (void)
{
	char s1[] = "hello";
	char s2[] = "hallo";

	if (ft_strcmp(s1, s2) == 0)
	{
		write(1, "ok", 2); 
	}
	if (ft_strcmp(s1, s2) != 0)
	{
		write(1, "no", 2);
	}	
	return (0);
}
*/
