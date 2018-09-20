/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:01:04 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/20 16:01:07 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0 || f(tab[i], tab[i + 1]) == 0)
			i++;
		else
		{
			i = 0;
			while (i < length - 1)
			{
				if (f(tab[i], tab[i + 1]) > 0 || f(tab[i], tab[i + 1]) == 0)
					i++;
				else
					return (0);
			}
		}
	}
	return (1);
}
