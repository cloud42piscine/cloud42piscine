/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:43:07 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/17 19:25:02 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int j;

	j = 0;
	if (str[j] >= 'a' && str[j] <= 'z')
		str[j] = str[j] - 32;
	j++;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		if (str[j - 1] == 32 || str[j - 1] == 43 || str[j - 1] == 45)
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] = str[j] - 32;
			else if (str[j] >= 'A' && str[j] <= 'Z')
			{
				str[j] = str[j] + 32;
			}
		}
		j++;
	}
	return (str);
}
