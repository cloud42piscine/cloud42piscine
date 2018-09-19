/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:27:04 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/13 18:24:19 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int cpt;
	int resultat;
	int signe;

	resultat = 0;
	signe = 1;
	cpt = 0;
	while (str[cpt] == ' ' || str[cpt] == '\t' || str[cpt] == '\v' ||
			str[cpt] == '\r' || str[cpt] == '\f' || str[cpt] == '\n')
		cpt++;
	if (str[cpt] == '-')
	{
		cpt++;
		signe = -1;
	}
	else if (str[cpt] == '+')
		cpt++;
	while (str[cpt] >= '0' && str[cpt] <= '9')
	{
		resultat = resultat * 10;
		resultat = resultat + (str[cpt] - 48);
		cpt++;
	}
	return (resultat * signe);
}
