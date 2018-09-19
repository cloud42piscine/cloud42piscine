/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 23:52:27 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/11 16:06:14 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*res;
	char	*beg;
	char	*end;
	char	stck;

	res = str;
	beg = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (beg < end)
	{
		stck = *beg;
		*beg = *end;
		*end = stck;
		beg++;
		end--;
	}
	return (res);
}
