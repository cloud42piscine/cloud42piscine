/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:27:04 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/03 19:21:02 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	nega;
	int	i;
	int	soluc;
	soluc = 0;
	i = 0;
	nega = 1;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '+')
	{
		i++;
	}
	if (str[i] == '-')
	{
		nega = nega * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		soluc = soluc * 10;
		soluc = soluc + (str[i] - '0');
		i++;
	}
	soluc = soluc * nega;
	return (soluc);
}
