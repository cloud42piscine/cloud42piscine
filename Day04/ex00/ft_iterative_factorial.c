/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:41:04 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/04 18:56:19 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int result;

	if (nb < o || nb >= 10)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
