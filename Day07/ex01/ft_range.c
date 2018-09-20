/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:45:26 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/20 15:46:30 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	*ft_range(int min, int max)
{
	int	*x;
	int	y;

	y = 0;
	if (min >= max)
		return (NULL);
	if (!(x = malloc((max - min) * sizeof(int))))
		return (0);
	while (min < max)
	{
		x[y] = min;
		y++;
		min++;
	}
	return (x);
}
