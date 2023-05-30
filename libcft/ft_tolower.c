/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aindiaz <aindiaz@student.42urduliz>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:43:35 by aindiaz           #+#    #+#             */
/*   Updated: 2022/12/15 14:52:02 by aindiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		c += 32;
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c;

	c = 'E';
	printf("%s", ft_tolower(c));
	return(0);
}*/
