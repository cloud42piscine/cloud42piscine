/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 20:01:52 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/03 20:12:38 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int stock;
	int i;
	int j;
	j = 1;

	while (j <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				stock = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = stock;
			}
			i++;
		}
		j++;
	}
}
