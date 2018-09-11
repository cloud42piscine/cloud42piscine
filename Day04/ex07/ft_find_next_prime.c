/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 22:47:00 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/06 15:59:06 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	i;
	int	mod;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (nb > i && i <= 9)
	{
		mod = nb % i;
		if (mod == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int	i;

	while (i != 1)
	{
		i = ft_is_prime(nb);
		if (i == 1)
		{
			return (nb);
		}
		else
		{
			nb++;
		}
		return (nb);
	}
	return (0);
}
