/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 18:25:28 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/03 12:12:49 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stlib.h>

void ft_putchar(void);

void	ft_swap(int *a, int *b);
{
	int c;
	c = *a;
	*a = *b;
	*b = *c;

}