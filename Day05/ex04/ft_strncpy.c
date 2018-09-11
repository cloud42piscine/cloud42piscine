/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:07:36 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/11 11:00:06 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;
	int f;

	f = 0;
	i = 0;
	j = 0;
	while (src[i] != 0 && f <= n)
	{
		dest[j] = src[i];
		j++;
		i++;
		f++;
	}
	return (dest);
}
