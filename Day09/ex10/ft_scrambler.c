/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 03:14:10 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/07 03:36:02 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int stck;

	stck = ***a;
	***a = *b;
	*b = ****d;
	****d = *******c;
	*******c = stck;
}
