/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:12:44 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/05 15:56:20 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;
	res = 0;

	if (power < 0 || nb == 0 || nb >13)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int main()
{
	printf("%d", ft_iterative_power(5, 5));
	return (0);
}
