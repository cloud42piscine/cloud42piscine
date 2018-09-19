/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:31:01 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/16 15:58:08 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int taille;

	taille = max - min;
	if (min >= max)
	{
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * taille);
	if (*range == 0)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
		printf("%d", range[0][i]);
	}
	return (taille);
}
