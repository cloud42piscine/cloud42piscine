/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:10:44 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/10 18:47:11 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char c;

	if (n < 0)
	{
		c = 'N';
		ft_putchar(c);
	}
	else
	{
		c = 'P';
		ft_putchar(c);
	}
}
