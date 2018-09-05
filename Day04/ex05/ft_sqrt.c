/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:33:32 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/05 16:49:39 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_sqrt(int nb)
{
	int i;
	int div;
	int mod;
	i = 1;

	if (nb <= 0)
	{
		return (0);
	}
	div = nb / i;
	mod = nb % i;
	while (i < div)
	{
		i++;
		div = nb / i;
		mod = nb % i;
	}
	if (div == i && mod == 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}

}
