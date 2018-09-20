/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 18:13:19 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/19 18:13:36 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*arg;
	int		i;
	int		j;
	int		k;
	int		stck;

	stck = 0;
	i = 1;
	while (i < argc)
		stck = ft_strlen(argv[i++]) + 1;
	arg = (char*)malloc(sizeof(char) * stck);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			arg[k++] = argv[i][j++];
		if (i == argc - 1)
			arg[k++] = '\0';
		else
			arg[k++] = '\n';
		i++;
	}
	return (arg);
}
