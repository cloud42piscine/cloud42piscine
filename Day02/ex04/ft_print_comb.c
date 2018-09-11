/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:20:26 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/11 14:29:55 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0' - 1;
	while (++c <= '9')
	{
		d = c;
		while (++d <= '9')
		{
			u = d;
			while (++u <= '9')
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
				if (c != '7' || d != '8' || u != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
