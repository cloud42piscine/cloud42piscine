/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 01:09:43 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/07 01:47:16 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int g_index;

	g_index = 0;
	if (base == 1)
	{
		return (base);
	}
	g_index++;
	if (base % 2 == 0)
	{
		ft_collatz_conjecture(base / 2);
	}
	else
	{
		ft_collatz_conjecture((base * 3) + 1);
	}
}
