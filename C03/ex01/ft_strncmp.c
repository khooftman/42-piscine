/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khooftma <khooftma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:43:06 by khooftma          #+#    #+#             */
/*   Updated: 2026/02/12 11:33:37 by khooftma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "hallo";
	char s2[] = "haleeeee";
	unsigned int n = 5;

	if (ft_strncmp(s1, s2, n) == 0)
	{
		write(1, "ok\n", 3);
	}
	else
	{
		write(1, "no match\n", 9);
	}
	return (0);
}
*/
