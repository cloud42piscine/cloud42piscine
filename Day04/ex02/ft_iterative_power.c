/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:12:44 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/14 15:51:49 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int c;
	int v;

	c = 0;
	v = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (c != power)
	{
		c = c + 1;
		v = v * nb;
	}
	return (v);
}
