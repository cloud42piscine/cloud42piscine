/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:25:13 by dgunes            #+#    #+#             */
/*   Updated: 2018/09/09 23:29:28 by dgunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	else if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	else if (*s1 != *s2)
		return (0);
	return (1);
}
