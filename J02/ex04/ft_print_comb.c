/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 12:08:48 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/02 15:48:40 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
{
	write (1, &c, 1);
}

void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';

	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <='9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (! (a == '7' && b == '8' && c = '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
