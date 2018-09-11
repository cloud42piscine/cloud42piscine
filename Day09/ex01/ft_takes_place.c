/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:51:28 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/06 19:33:52 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*sat(int hour)
{
	char *hor;

	if (hour < 12 && hour >= 0)
	{
		hor = "A.M.";
		return (hor);
	}
	else
	{
		if (hour >= 12 && hour <= 23)
		{
			hor = "P.M.";
			return (hor);
		}
	}
	return ("e");
}

int		sec(int hour)
{
	int stock;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour >= 13 && hour < 24)
	{
		stock = hour;
		stock = stock - 12;
	}
	else
		stock = hour;
	printf("%d", stock);
	printf(".00 %s", sat(hour));
	hour++;
	if (hour >= 13 && hour < 24)
	{
		stock = hour;
		stock = stock - 12;
	}
	else
	{
		stock = hour;
	}
	printf(" AND %d", stock);
	printf(".00 %s\n", sat(hour));
	return (0);
}

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 23)
	{
		sec(hour);
	}
}
