/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 23:52:27 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/03 15:22:52 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	char	stck;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j <= (i / 2))
	{
		stck = str[j];
		str[j] = str[i - 1];
		str[i - 1] = stck;
		j++;
		i--;
	}
	return (str);
}